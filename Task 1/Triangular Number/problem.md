## Problem Statement

Given an integer array nums, return the number of triplets chosen from the array that can make triangles if we take them as side lengths of a triangle.

### Constraints

1 <= nums.length <= 1000

0 <= nums[i] <= 1000

### Example Input

nums = [2,2,3,4]

### Example Output

3

### Explanation

Valid combinations are:

2,3,4 (using the first 2)

2,3,4 (using the second 2)

2,2,3

## Solution

### Approach 1

The condition for the triplets (a, b, c) representing the lengths of the sides of a triangle, to form a valid triangle, is that the sum of any two sides should always be greater than the third side alone. i.e.
a + b > c , b + c > a , a + c > b.

The simplest method to check this is to consider every possible triplet in the given nums nums array and checking if the triplet satisfies the three inequalities mentioned above.

Time complexity : O(n^3).

Three nested loops are there to check every triplet.

### Approach 2

This problem is very similar to 3-Sum, in 3-Sum, we can use three pointers (i, j, k and i < j < k) to solve the problem in O(n^2) time for a sorted array.

For this problem, once we sort the input array nums, the key to solve the problem is that given nums[k], count the combination of i and j where nums[i] + nums[j] > nums[k] (so that they can form a triangle). If nums[i] + nums[j] is larger than nums[k], we know that there will be j - i combination.

Time complexity : O(n^2)
