#include<iostream>
using namespace std;
int jos(int n,int k)
{
    if(n==1)
    return 0;
    else
    {
       return (jos(n-1,k)+k)%n;
    }
}
int main()
{   int n,k,choice;
    cout<<"\n\tEnter the total no of people : ";
    cin>>n;
    cout<<"\n\tEnter the k : ";
    cin>>k;
    cout<<"The numbering start form where : ";
    cout<<"\n\t 0.Zero";
    cout<<"\n\t 1.One\n";
    cin>>choice;
    switch(choice)
    {
        case 0: cout<<"\n\tThe person remaining is : "<<jos(n,k);
                break;
        case 1: cout<<"\n\tThe person remaining is : "<<jos(n,k)+1;
                break;
        default: cout<<"\n\tEnter valid choice : ";
                 break;
    }
    return 0;
}
