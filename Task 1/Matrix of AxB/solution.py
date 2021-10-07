# Write a program to show elements of a two dimensional list in a 2-d array format.

import random

def generateMatrix(string):
	List = []
	(rows, cols) = map(int, string.split(' '))
	
	for i in range(rows):
		innerList = []
		for j in range(cols):
			innerList.append(random.randrange(1, 99))
		List.append(innerList)
	return List


matrix = generateMatrix(input())

# Organised form of matrix
for row in matrix:
	for elem in row:
		print(elem, end=" ")
	print("")