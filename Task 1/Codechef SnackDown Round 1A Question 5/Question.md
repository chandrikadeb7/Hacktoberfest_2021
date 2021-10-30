The beauty of an (non-empty) array of integers is defined as the difference between its largest and smallest element.

For example, the beauty of the array [2,3,4,4,6] is 6−2=4.

An array A is said to be good if it is possible to partition the elements of A into two non-empty arrays B1 and B2 such that

B1 and B2 have the same beauty.
Each element of array A should be in exactly one array: either in B1 or in B2.
For example, the array [6,2,4,4,4] is good because its elements can be partitioned into two arrays B1=[6,4,4] and B2=[2,4], where both B1 and B2 have the same beauty (6−4=4−2=2).

You are given an array A of length N. In one move you can:

Select an index i (1≤i≤N) and either increase Ai by 1 or decrease Ai by 1.
Find the minimum number of moves required to make the array A good.
Sample Input 1 
2
3
4 2 6
4
-2 4 -2 4
Sample Output 1 
2
0