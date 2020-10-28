/*
Program to Check if Number is a krishnamurthy number 

This Program is Contributed by Abhishek Jaiswal
*/

#include <bits/stdc++.h> 
using namespace std; 

int factorial(int n) 
{ 
    int fact = 1; 
    while (n != 0) { 
        fact = fact * n; 
        n--; 
    } 
    return fact; 
} 
bool isKrishnamurthy(int n) 
{ 
    int sum = 0; 
  
    int temp = n; 
    while (temp != 0) { 
        sum += factorial(temp % 10); 

        temp = temp / 10; 
    } 
    return (sum == n); 
} 
int main() 
{ 
    int n;
    cout<<"Enter the Number :";
    cin>>n;
    if (isKrishnamurthy(n)) 
        cout << "YES it is a Krishnamurthy Number "<<endl; 
    else
        cout << "NO it is not a Krishnamurthy Number "<<endl; 
    return 0; 
} 
