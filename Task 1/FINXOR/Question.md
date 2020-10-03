Problem
=====================================
[LINK To the Problem](https://www.codechef.com/SEPT20A/problems/FINXOR)
This is an interactive problem.

There is a sequence of positive integers A1,A2,…,AN
. You do not know this sequence, but your task is to find the value of A1⊕A2⊕…⊕AN, where ⊕

denotes the bitwise XOR operation.

You may ask up to 20
questions. In each question, you should choose an integer K (1≤K≤2⋅106) and the interactor responds with the value of (A1⊕K)+(A2⊕K)+…+(AN⊕K).

Interaction
-------------------
1. First, you should read a line containing a single integer T denoting the number of test cases. The description of interaction for T
test cases follows.
2. For each test case, you should start by reading a line containing a single integer N
.
3. To ask a question, you should print a line containing two space-separated integers 1
and K, where 1≤K≤2⋅106. Then, you must read a line containing a single integer ― the answer to your question or −1 if the question is invalid or you asked more than 20
questions.
4. Finally, you should print a line containing two space-separated integers 2
and X, where X=A1⊕A2⊕…⊕AN. Then, you must read a line containing a single integer: 1 if your answer was correct or −1 if it was incorrect. If your answer was correct, you should continue solving the remaining test cases.

Note that when you receive an answer −1
, you should immediately terminate your program to receive a Wrong Answer verdict; otherwise, you may receive any verdict. Don't forget to flush the output after printing each line!

Constraints
--------------------------
1≤T≤100
1≤N≤103
1≤Ai≤106
for each valid i
