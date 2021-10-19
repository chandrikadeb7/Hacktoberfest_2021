Consider an array A={a1,a2,...,an} of size n≥1. If ak=2x−1 for all 1≤k≤n, for some integer x (1≤x≤60), then A is called interesting array.

You are given a number C. Find any interesting array A of minimum possible size such that a1⨁a2⨁...⨁an=C, where ⨁ represents bitwise XOR operation.

If there exists multiple such arrays, output any one.

Input Format
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains single integer C on a single line.
Output Format
For each testcase, on the first line output the minimum possible size of array A satisfying the given property.
On the next line output the elements of array A in any order.
Constraints
1≤T≤105
0≤C<260
It is guaranteed in the input that sum of lengths of arrays over all testcases does not exceed 106.
Sample Input 1 
3
1
2
3
Sample Output 1 
1
1
2
1 3
1
3
Explanation
Test case 1: C=1, A can be {1}
Test case 2: C=2, A can be {1,3}
Test case 3: C=3, A can be {3}
