#### Problem Statement
The Monk wants to teach all its disciples a lesson about patience, since they are always in a hurry to do something crazy. 
To teach them this, he gives them a list of N numbers, which may or may not be distinct. 
The students are supposed to solve a simple Mathematical equation based on the array of these N numbers.

* g(x) - GCD (a[ 0 ], a[ 1 ], a[ 2 ]... a[n-1] )
* f(x) - (a[ 0 ] * a[ 1 ] * a[ 2 ]... * a[n-1] )

The value of the MonkQuotient is: **10^9 + 7** .

*The equation to be solved is:* ( f(x)^g(x) ) % MonkQuotient

#### Input constraints:
The first line of input will contain an integer — N. The next line will contain N integers denoting the elements of the list.

#### Output constraints:
Print the required answer of the equation.

#### Constraints:
1 ≤ N ≤ 50

1 ≤ Ai ≤ 10^3

#### Sample Input 
2

2 6 

#### Sample Output
144

#### Explanation
Here we can see that the product of the elements of array is 12 and the GCD of the array comes out to be 2 . 
Thus the answer would be 12^2 which is 144.
