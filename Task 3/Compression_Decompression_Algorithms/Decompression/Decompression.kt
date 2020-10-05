package dev.benedikt.compression.sixpack

import java.nio.ByteBuffer

open class SixpackDecompressor(config: SixpackConfig) : SixpackBase(config) {

  private var buffer = IntArray(0)
  private var bufferPosition = 0

  private var inputBitBuffer = 0
  private var inputBitCount = 0

  private var inputBuffer: ByteBuffer? = null

  override fun init() {
    super.init()

    this.inputBitBuffer = 0
    this.inputBitCount = 0

    this.buffer = IntArray(this.maxSize)
    this.bufferPosition = 0
  }

  /**
   * Decompress the given data into a byte array.
   *
   * @param buffer The bytes to decompress
   */
  fun decompress(buffer: ByteBuffer): ByteArray {
    // Initialize the compression data.
    this.init()

    // Save the input stream (converting it to unsigned byte values).
    this.inputBuffer = buffer

    val outputStream = mutableListOf<Int>()

    while (true) {
      val code = this.decompressCode() ?: break

      if (code < 256) {
        // The first 256 characters are unchanged.
        outputStream.add(code)
        this.buffer[this.bufferPosition++] = code
        if (this.bufferPosition >= this.maxSize) this.bufferPosition = 0
        continue
      }

      val index = (code - this.config.firstCode) / this.config.codesPerRange
      val length = code - this.config.firstCode + this.config.minCopy - index * this.config.codesPerRange

      val inputCode = this.getInputCode(this.config.copyBits[index]) ?: break
      val dist = inputCode + length + this.copyMin[index]

      var j = this.bufferPosition
      var k = this.bufferPosition - dist

      if (k < 0) {
        k += this.maxSize
      }

      for (i in 0 until length) {
        outputStream.add(this.buffer[k])
        this.buffer[j++] = this.buffer[k++]
        if (j >= this.maxSize) j = 0
        if (k >= this.maxSize) k = 0
      }

      this.bufferPosition += length
      if (this.bufferPosition >= this.maxSize) this.bufferPosition -= this.maxSize
    }

    return outputStream.map { it.toByte() }.toByteArray()
  }

  /**
   * Decompress the next character code from the input stream.
   *
   * @return the decompressed code. `null` if there is none left.
   */
  private fun decompressCode(): Int? {
    var code = this.config.root

    do {
      val bit = this.readBit() ?: return null
      code = if (bit) this.rightCode[code] else this.leftCode[code]
    } while (code <= this.config.maxChar)

    code -= this.config.successMax
    this.updateHuffmanModel(code)
    return code
  }

  private fun getInputCode(bits: Int): Int? {
    var mask = 1
    var code = 0

    for (i in 0 until bits) {
      val bit = this.readBit() ?: return null
      if (bit) {
        code = code or mask
      }
      mask = code shl 1
    }

    return code
  }

  /**
   * Get the next bit from the input stream.
   *
   * @return The bit value. `null` if there is none left.
   */
  private fun readBit(): Boolean? {
    if (this.inputBitCount-- <= 0) {
      this.inputBitBuffer = this.readByte() ?: return null
      if (this.inputBitBuffer == this.config.terminationCode) return null
      this.inputBitCount = 7
    }

    val masked = this.inputBitBuffer and 128
    val bit = masked != 0
    this.inputBitBuffer = this.inputBitBuffer shl 1 and 255
    return bit
  }

  /**
   * Read the next byte from the input stream.
   *
   * @return the byte read.
   */
  private fun readByte(): Int? {
    if (!inputBuffer!!.hasRemaining()) return null
    // Convert the signed byte to a unsigned one for easier processing.
    return inputBuffer!!.get().toInt() and 0xff
  }
}

