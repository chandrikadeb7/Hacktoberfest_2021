Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

    Integers in each row are sorted from left to right.
    The first integer of each row is greater than the last integer of the previous row.

Question Link - Leetcode:
    [Search in 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)

Approach

    1. It is given that the matrix is sorted from left to right and the first integer of each row is greater than that of the previous row.

    2. With this information, it is pretty clear that, that when we flatten the matrix, it will come out to be a sorted 1D array and hence we can apply binarySearch on it.

    3. We can hence solve the problem of searching in the matrix using BinarySearch.

`Time complexity:  O(log(matrix.length*matrix[0].length))`

`Space complexity: O(1)`