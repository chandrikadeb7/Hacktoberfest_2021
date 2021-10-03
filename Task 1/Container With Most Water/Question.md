Given an array of n non-negative integers a1, a2, ..., an , where each element represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of a line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container.

Example:
a) Input: n=9<br>
lines = [1,8,6,2,5,4,8,3,7]<br>
Output: 49<br>
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water the container can contain is 49 which lies between the index(1,8) i.e, between the line 8 at 1st position and line 7 at 8th position.


b) Input: n=5<br>
lines = [4,3,2,1,4]<br>
Output: 16<br>
Explanation: The container containing most water lies between the index 0 and 4 i.e, between the line 4 at 0th position and line 4 at 4th position.


Approach: Two Pointer Approach

The max area is calculated by the following formula:
Area= (j - i) * min(lines[i], lines[j])<br>

We should choose (i, j) so that Area is max. Note that i, j go through the range (1, n) and j > i.
The simple way is to take all possibilities of (i, j) and compare all obtained Area. The time complexity will be O(n)^2.

But, What we gonna do is to choose all possibilities of (i, j) in a wise way. If:
lines[i] < lines[j] we will check the next (i+1, j) (or move i to the right)
lines[i] >= lines[j] we will check the next (i, j-1) (or move j to the left)
Here is the explaination for that:
When lines[i] < lines[j] , we don't need to calculate all (i, j-1), (i, j-2), .... Why? because these max areas will be smaller than our Area at (i, j).

NOTE: The Time complexity of this solution is O(n).


