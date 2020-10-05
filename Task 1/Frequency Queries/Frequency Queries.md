###### link:https://www.hackerrank.com/challenges/frequency-queries?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

# Frequency Queries
You are given  queries. Each query is of the form two integers described below:
1-x: Insert x in your data structure.
2-y: Delete one occurence of y from your data structure, if present.
3-z: Check if any integer is present whose frequency is exactly . If yes, print 1 else 0.

The queries are given in the form of a 2-D array queries of size q where queries[i][0] contains the operation, and queries[i][1] contains the data element. For example, you are given array queries=[(1,1),(2,2),(3,2),(1,1),(1,1),(2,1),(3,2)]. The results of each operation are:

Operation   Array   Output
(1,1)       [1]
(2,2)       [1]
(3,2)                   0
(1,1)       [1,1]
(1,1)       [1,1,1]
(2,1)       [1,1]
(3,2)                   1
Return an array with the output: [0,1]

### Function Description
Complete the freqQuery function in the editor below. It must return an array of integers where each element is a  if there is at least one element value with the queried number of occurrences in the current array, or 0 if there is not.
freqQuery has the following parameter(s):
queries: a 2-d array of integers 
### Input Format
The first line contains of an integer q, the number of queries.
Each of the next q lines contains two integers denoting the 2-d array queries.

### Constraints
1<=q<=10^5
1<=x,y,z<=10^9
All queries[i][0] can contain 1,2,3 only
1<=queries[i][0]<=10^9
 
### Output Format
Return an integer array consisting of all the outputs of queries of type 3.

##### Sample Input 0
8
1 5
1 6
3 2
1 10
1 10
1 6
2 5
3 2
##### Sample Output 0
0
1

##### Sample Input 1
4
3 4
2 1003
1 16
3 1
##### Sample Output 1
0
1

##### Sample Input 2
10
1 3
2 3
3 2
1 4
1 5
1 5
1 4
3 2
2 4
3 2
##### Sample Output 2
0
1
1
