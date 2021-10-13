Three Boxes

Chef has 3 boxes of sizes A, B, and C respectively. He puts the boxes in bags of size D (A≤B≤C≤D). Find the minimum number of bags Chef needs so that he can put each box in a bag. A bag can contain more than one box if the sum of sizes of boxes in the bag does not exceed the size of the bag.

Input Format
The first line contains T denoting the number of test cases. Then the test cases follow.
Each test case contains four integers A, B, C, and D on a single line denoting the sizes of the boxes and bags.
Output Format
For each test case, output on a single line the minimum number of bags Chef needs.

Constraints
1≤T≤100
1≤A≤B≤C≤D≤100
Subtasks
Subtask 1 (100 points): Original constraints

Sample Input 1 
3
2 3 5 10
1 2 3 5
3 3 4 4
Sample Output 1 
1
2
3
Explanation
Test case 1: The sum of sizes of boxes is 2+3+5=10 which is equal to the size of a bag. Hence Chef can put all three boxes in a single bag.

Test case 2: Chef can put boxes of size 1 and 3 in one bag and box of size 2 in another bag.

Test case 3: Chef puts all the boxes in separate bags as there is no way to put more than one box in a single bag.

