## Problem Statement

Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of elements in the union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

### Constraints

1 <= n,m <= 100000
0 <= a[i], b[i] <= 100000

### Example 1

Input:

5 3
1 2 3 4 5
1 2 3

Output: 
5

Explanation:

1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.

### Example 2

Input:

6 2 
85 25 1 32 54 6
85 2 

Output: 
7

Explanation: 

85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.

## Your Task

Complete doUnion function that takes a, n, b, m as parameters and returns the count of union elements of the two arrays. The printing is done by the driver code.

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(n+m)
