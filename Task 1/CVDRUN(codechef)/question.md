# PROBLEM STATEMENT :

Covid-19 is spreading fast! There are N cities, numbered from 0 to (N−1), arranged in a circular manner. City 0 is connected to city 1, 1 to 2, …, city (N−2) to city (N−1), and city (N−1) to city 0.

The virus is currently at city X. Each day, it jumps from its current city, to the city K to its right, i.e., from city X to the city (X+K)%N. As the virus jumps, the cities in between don't get infected. Cities once infected stay infected. You live in city Y. Find if it will reach your city eventually. If it will, print YES, else print NO.

# INPUT :

-> The first line of the input consists of an integer T, the number of test cases.
-> The first and only line of each test case contains four space-separated integers - N, K, X and Y, denoting the -> number of cities, the size of jumps, Covid's current city, and the city that you live in, respectively.

# OUTPUT :

For each test case, in a new line, print YES if Covid shall reach your city after a finite number of days, else print NO.



# CONSTRAINTS :

1≤T≤100
1≤N≤1000
0≤X,Y≤N−1
0≤K≤1000



# INPUT FORMAT :

2
6 2 5 3
12 3 4 2



# OUTPUT FORMAT :

YES
NO


# EXPLANATION :

In the first sample, Covid starts at city 5, then goes to city 1, and then from city 1 to city 3. Thus, it reaches the city that you live in.

In the second sample, Covid starts at city 4, goes to city 7, then 10, 1, then 4, 7, 10, …, and so on. It never reaches city 2.