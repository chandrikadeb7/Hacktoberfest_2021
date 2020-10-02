package dev.benedikt.compression.sixpack

import java.nio.ByteBuffer

open class SixpackCompressor(config: SixpackConfig) : SixpackBase(config) {

  private var outputBuffer = mutableListOf<Byte>()

  private var outputBitBuffer = 0
  private var outputBitCount = 0

  override fun init() {
    super.init()

    this.outputBitBuffer = 0
    this.outputBitCount = 0

    this.outputBuffer = mutableListOf()
  }

  fun compress(buffer: ByteBuffer): ByteArray {
    throw RuntimeException("Data compression is not yet implemented.")

//    this.init()
//
//    while (buffer.hasRemaining()) {
//      this.compressCode(buffer.get().toInt() and 0xff)
//    }
//
//    return this.outputBuffer.toByteArray()
  }

  /* private */ fun compressCode(code: Int) {
    val bits = mutableListOf<Boolean>()
    var a = code + this.config.successMax

    do {
      bits.add(this.rightCode[this.up[a]] == a)
      a = this.up[a]
    } while (a != this.config.root)

    bits.reversed().forEach { this.writeBit(it) }

    this.updateHuffmanModel(code)
  }

  private fun writeBit(bit: Boolean) {
    this.outputBitBuffer = this.outputBitBuffer shl 1
    if (bit) this.outputBitBuffer = this.outputBitBuffer or 1
    this.outputBitCount++

    if (this.outputBitCount == 8) {
      this.outputBuffer.add(this.outputBitBuffer.toByte())
      this.outputBitCount = 0
    }
  }
}
