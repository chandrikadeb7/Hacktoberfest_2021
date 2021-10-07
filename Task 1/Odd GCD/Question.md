You are given an array A1,A2,…,AN consisting of N integers. Your goal is to make the GCD of all the elements in the array an odd integer. To achieve this goal, you can do the following operation any number of times:

Choose an index i(1≤i≤N) such that Ai>1 and set Ai=⌊Ai/2⌋

You can choose an index multiple times during the operations. Find the minimum number of operations after which GCD of all the elements in the array becomes an odd integer.

Sample Input
3  
3  
2 3 5  
2  
4 6  
3   
4 12 24  

Sample Output
0  
1   
2  
