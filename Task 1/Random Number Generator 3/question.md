Your mathematics teacher Mr. Senarath wants you to create a random number generator, but in a special way. He wants the random number to contain at least one of the special “sub numbers” contained in it. This is how it is done. You are given a range of numbers, and the set of “sub numbers”. You are to find all the numbers within the given range that contains at least one of the “sub numbers”. A sub number is said to be contained in a number, if the sub number appears in the number as a contiguous block. Eg: Numbers between 3-30 containing the sub numbers 3,9 and 14:

                3,13,14,19,23,29 

After the numbers are found, they are arranged in the ascending order. Then, an index is given. The random number is the number in the sequence which corresponds to the index.

Notes: - The given range of numbers include the two delimiting numbers themselves. - Indexing starts at 1.

# Input 

The input is given as follows.

A B C D n1 n2 ... nD

The first line contains the following values separated by spaces. A-Minimum value of the range of numbers B-Maximum value of the range of numbers C-Index of the winning number D-Number of sub numbers

The following D lines contain a sub number each.

# Constraints

1<=A<=B<=10^6
1<=C<=10^6
1<=D<=18
All sub numbers are less than 10^19

# Output Format

The random number should be printed to the standard output. If such a number does not exist, the output should be: DOES NOT EXIST

# Sample Input 0

1 1 1 1
2
# Sample Output 0

DOES NOT EXIST