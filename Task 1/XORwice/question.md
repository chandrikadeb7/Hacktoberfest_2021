codeforce 676
A. XORwice
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
In order to celebrate Twice's 5th anniversary, Tzuyu and Sana decided to play a game.

Tzuyu gave Sana two integers a and b and a really important quest.

In order to complete the quest, Sana has to output the smallest possible value of (a⊕x) + (b⊕x) for any given x, where ⊕ denotes the bitwise XOR operation.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). Description of the test cases follows.

The only line of each test case contains two integers a and b (1≤a,b≤109).

Output
For each testcase, output the smallest possible value of the given expression.

Example
inputCopy
6
6 12
4 9
59 832
28 14
4925 2912
1 1
outputCopy
10
13
891
18
6237
0
Note
For the first test case Sana can choose x=4 and the value will be (6⊕4) + (12⊕4) = 2+8 = 10. It can be shown that this is the smallest possible value
