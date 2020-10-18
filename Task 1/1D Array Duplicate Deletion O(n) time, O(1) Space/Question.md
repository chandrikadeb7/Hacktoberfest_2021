Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
You have to do this task without allocating extra-memory.
To do this, create a function removeDuplicates(int[] nums). If there are n elements when th e duplicates are not considered (if nums has 2, 2 count 2 once),
then arrange the array in such a way that first n elements are non- duplicate elements. Perform the in-place operations, return 'n', that is, number of elements
not considering duplicates.

Example:
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]
Explanation: Your function should return 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.
             It doesn't matter what the values of elemnts are beyond the index returned number.

Hint: Use two pointer-approach.
