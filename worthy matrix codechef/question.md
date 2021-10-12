# Problem Statement
Chef found a matrix A with N rows (numbered 1 through N) and M columns (numbered 1 through M), where for each row r and column c, the cell in row r and column c (denoted by (r,c)) contains an integer Ar,c.

This matrix has two interesting properties:

The integers in each row form a non-decreasing sequence, i.e. for each valid i, Ai,1≤Ai,2≤…≤Ai,M.
The integers in each column also form a non-decreasing sequence, i.e. for each valid j, A1,j≤A2,j≤…≤AN,j.
A K-worthy submatrix is a square submatrix of A, i.e. a submatrix with l rows and l columns, for any integer l, such that the average of all the integers in this submatrix is ≥K.

Chef wants you to find the number of K-worthy submatrices of A.

## Input
- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains three space-separated integers N, M and K.
- N lines follow. For each valid i, the i-th of these lines contains M space-separated integers Ai,1,Ai,2,Ai,3,…,Ai,M.

## Output
For each test case, print a single line containing one integer ― the number of K-worthy submatrices of A.

## Example
### Input:
1
3 3 4
2 2 3
3 4 5
4 5 5


###  Output:
7
