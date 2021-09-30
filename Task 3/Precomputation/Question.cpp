#include <bits/stdc++.h>
using namespace std;

//Precomputation
const long long M = 10e9 + 7;
const int N = 10e5;
long long arr[N];

void factorial()
{
    for (int i = 0; i < N; i++)
    {
        int fact=1;
        if(i==0 || i==1)
        arr[i]=1;
        else
        arr[i]=((arr[i-1]%M)*(i%M))%M;
    }
}

int main()
{
    /*
This is the technique which you also saw in pascal's triangle wala question, Pre-Computation, ie pehle se answer 
nikal ke rakh do and jis range ke liye mangha jai us range tak ke liye precomputed result dikha do

Eg Question:
Given for T test cases print the factorial of the number N provided to you.
Take M = 10^9+7
T & N <= 10000

"mod C" == M is modulo,
1. Addition property : (A + B) mod C = (A mod C + B mod C)mod C
2. Mod of a -ve number : (-A) mod C = (-A + C)mod C
2. Multiplication property of modular arithmetic:
(A * B) mod C = (A mod C * B mod C) mod C
3. Exponentiation property: A^B mod C = ( (A mod C)^B ) mod C
4. Modular Inverse property :

(A * A^-1) ≡ 1 (mod C) or equivalently (A * A^-1) mod C = 1
Only the numbers coprime to C (numbers that share no prime factors with C) have a modular inverse (mod C)

Now ⚠️⚠️As you know the at most 10^7 operatoins can be done in a sec, the normal code of factorial will not work,
one coz it will exceed the time limit and also coz it wouldnt be able to store the value of higher numbers.

so here's the modified code.

*/

int t;
cin>>t;
factorial();
while (t--)
{
    int n;
    cin>>n;
    cout<<arr[n]<<endl;
}

}