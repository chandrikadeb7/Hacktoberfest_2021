# PROBLEM STATEMENT:

n participants of the competition were split into m teams in some manner so that each team has at least one participant. After the competition each pair of participants from the same team became friends. Our task is to write a program that will find the minimum and the maximum number of pairs of friends that could have formed by the end of the competition.

# INPUT:

The only line of input contains two integers n and m, separated by a single space (1 ≤ m ≤ n ≤ 109) — the number of participants and the number of teams respectively.

# OUTPUT:

The only line of the output should contain two integers kmin and kmax — the minimum possible number of pairs of friends and the maximum possible number of pairs of friends respectively.

# EXPLANATION:

nmax = n-(k-1)
kmax = nmax*(nmax-1)/2;

because pairs will be maximum only when we give one member to all teams except one. if n=7 and k=4, three teams will have 1 member and one team will have 4 members. 4C2 will be maximum.


kmin = rem*(sz+1)*(sz)/2 + (k-rem)*sz*(sz-1)/2 

if input is 5 3, for kmin teams will be 2 2 1 i.e for rem=5%3=2, 2 teams will have size sz+1, i.e 5/3 + 1 = 2, and remaining teams (3-2) teams will have sz participants.