Write a program that takes in 4 integers as input. The integers a, b, c, d define the rectangle
R = {(a, b),(c, d)}. Your program must output all integral rectangles which are concentric to R and are
contained inside R. Do not output the rectangle R itself.
Each concentric rectangle should be printed in the format shown above and different rectangles should
be on new lines. Your program should print these concentric rectangles in decreasing order of their
sizes.
In case there is no concentric integral rectangle contained inside R, your program should not print anything but simply terminate.
Example :
Input : {(0,0), (4,4)}
Output : 1 1 3 3
Explanation: In the above example there is only one rectangle i.e,1 1 3 3 that is concentric and contained
inside the input rectangle
Constraints: −1000 < a1, b1, c1, d1 < 1000
Input format:
(Four integers)
a1, b1, c1, d1
Test Case 1:
Input:
1 1 6 6
Output:
2 2 5 5
3 3 4 4
Test Case 2:
Input:
0 0 7 7
Output:
1 1 6 6
2 2 5 5
3 3 4 4
