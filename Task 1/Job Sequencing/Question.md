Given a set of N jobs where each job i has a deadline and profit associated to it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the maximum profit and the number of jobs done.

Input:
The first line of input contains an integer T denoting the number of test cases. In each test case, first line consists of an integer N denoting the number of jobs. Second line will be of the format A1, B1, C1, A2, B2, C2..... AN, BN, CN, where Ai, Bi and Ci denote the ID, deadline and profit from the ith job respectively.

Output:
Output the number of jobs done and the maximum profit seperated by a space in a different line for each test case.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Deadline <= 100
1 <= Profit <= 500

Example:
Input:
2
4
1 4 20 2 1 10 3 1 40 4 1 30
5
1 2 100 2 1 19 3 2 27 4 1 25 5 1 15

Output:
2 60
2 127

Explanation:
Test Case 1: You can do job 3 followed by the job 1. The overall profit = 40 + 20 = 60
Test Case 2: You can do job 1 followed by the job 3. The overall profit = 100 + 27 = 127

