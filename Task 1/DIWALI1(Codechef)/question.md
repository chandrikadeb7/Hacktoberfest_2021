# Maximum Light Up (DIWALI1)

## PROBLEM STATEMENT :

Chef has allocated himself a budget of P rupees to buy Diwali crackers. There are only 3 types of crackers available in the market and each type of cracker can be bought any number of times.

1. Fuljhari, where each costs a rupees
2. Anar, where each costs b rupees
3. Chakri, where each costs c rupees

The crackers have the following interesting properties:-
- A Fuljhari can be lit on its own
- To light an Anar, you will need x Fuljharis
- To light a Chakri, you will need y Fuljharis

What's the maximum total of Anars and Chakris that Chef can light up with his given budget.

## INPUT :

- First line of input will contain T, the number of test cases. Then the test cases follow.
- Each test case contains of a single line of input, six integers P, a, b, c, x and y.

## OUTPUT :

For each test case, output in a single line the maximum total of Anars and Chakris Chef can light up.


## CONSTRAINTS :

- 1 ≤ T ≤ 10<sup>5</sup>
- 1 ≤ P,a,b,c,x,y ≤ 10<sup>9</sup>



## INPUT FORMAT :

3<br>
100 5 5 10 4 8<br>
16 2 2 2 1 1<br>
55 1 2 3 4 5


## OUTPUT FORMAT :

4<br>
4<br>
9


## EXPLANATION :

### Test case 1:

- Chef will buy 16 Fuljhari's and 4 Anar's which in total costs him 16⋅5+4⋅5=100 rupees.
- Next, he uses 16 Fuljhari's to light 164=4 Anar's.
- Since all the Fuljhari's are over, he can't light up any Chakri's.
- So in total, he is able to light up 4+0=4 Anar's and Chakri's.
- There is no other allocation giving a better answer than this.

### Test case 2:

- Chef will buy 4 Fuljhari's, 2 Anar's and 2 Chakri's which in total costs him 4⋅2+2⋅2+2⋅2=16 rupees.
- Next, he uses 2 Fuljhari's to light 21=2 Anar's.
- Next, he uses 2 Fuljhari's to light 21=2 Chakri's.
- So in total, he is able to light up 2+2=4 Anar's and Chakri's.
- The other possible allocation could be buying 4 Fuljhari's, 3 Anar's, and 1 Chakri.