#!/usr/bin/python3

# Python script to convert RGB code in format NN,NN,NN to Hex

from math import floor

rgbSource = input("What is the RGB code to convert (format as nn,nn,nn)")
rgb = rgbSource.split(",")
red = int(rgb[0])
green = int(rgb[1])
blue = int(rgb[2])

charOne = floor(red / 16)
charTwo = red % 16
charThree = floor(green / 16)
charFour = green % 16
charFive = floor(blue / 16)
charSix = blue % 16


def numberToLetter(i):
    if i == 10:
        i = "A"
    elif i == 11:
        i = "B"
    elif i == 12:
        i = "C"
    elif i == 13:
        i = "D"
    elif i == 14:
        i = "E"
    elif i == 15:
        i = "F"
    else:
        i = i
    return i


charOne = str(numberToLetter(charOne))
charTwo = str(numberToLetter(charTwo))
charThree = str(numberToLetter(charThree))
charFour = str(numberToLetter(charFour))
charFive = str(numberToLetter(charFive))
charSix = str(numberToLetter(charSix))

print("#" + charOne + charTwo + charThree + charFour + charFive + charSix)
