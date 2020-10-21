Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

#### Note:

><b>Solve this problem without using the library's sort function</b>  
><b>Come up with a one-pass algorithm using only O(1) constant space</b>

<b>Example 1:</b>  
Input: nums = [2,0,2,1,1,0]  
Output: [0,0,1,1,2,2]    

<b>Example 2:</b>  
Input: nums = [2,0,1]  
Output: [0,1,2]   

<b>Example 3:</b>  
Input: nums = [0]  
Output: [0]

<b>Example 4:</b>   
Input: nums = [1]  
Output: [1]  
 

**Constraints:**  

n == nums.length  
1 <= n <= 300  
nums[i] is 0, 1, or 2.  
