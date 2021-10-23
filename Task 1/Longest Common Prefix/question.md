Given a array of N strings, find the longest common prefix among all strings present in the array.


Example 1:
Input: {"apple", "ape", "april"}
Output: "ap"

Example 2:
Input: 
N = 2
arr[] = {hello, world}
Output: -1

Your Task:
You don't need to read input or print anything. Your task is to complete the function longestCommonPrefix() which takes the string array arr[] and its size N as inputs and returns the longest common prefix common in all the strings in the array. If there's no prefix common in all the strings, return "-1".


Expected Time Complexity: O(N*max(|arri|)).
Expected Auxiliary Space: O(max(|arri|)) for result.


Constraints:
1 ≤ N ≤ 103
1 ≤ |arri| ≤ 103