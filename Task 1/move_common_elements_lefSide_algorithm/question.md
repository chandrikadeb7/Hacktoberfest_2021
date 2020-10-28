# PROBLEM STATEMENT:

Move common elements of the array which is '0' to the <-- left side.
however order of the array should not be affected while moving the common elements.

# EXPLANATION:

Initially R and W will point len(arr)-1 // last element of the array.
Traverse each element and compare with '0'

if arr[R] != 0

R -= 1
W -= 1

else
R -= 1

"R" will end up traversing every element of the array.
But "W" will end up in some index point > 0 (if zero's are present in the array)
because it didn't move when it found zero.
Hence print zeros in the remaining indexes

# INPUT:

original array: [0, 2, 5, 0, 11, 0, 6, 8, 0, 15]

# OUTPUT:

Moved Array: [0, 0, 0, 0, 2, 5, 11, 6, 8, 15]
