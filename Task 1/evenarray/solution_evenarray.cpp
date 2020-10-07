#include<iostream>
using namespace std;
int swapsreq(int * arr, int n)
{
    int e=0,o=0,ep=0,op=0;
    int count=0;
    for(int i=0; i <n ;i++)
    {
        if(i&1)
        {
            op++;
        }
        if(i%2==0)
        {
            ep++;
        }
        if(arr[i]%2 !=0)
        {
            o++;
        }
        if(arr[i]%2==0)
        {
            e++;
        }
    }
    if(o > op || o < op)
    {
        return -1;
    }
    if(e>ep || e <ep)
    {
        return -1;
    }
    for(int i=0; i <n ;i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2!=0)
            {
                swap(arr[i],arr[i+1]);
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[1001];
        for(int i=0; i <n ;i ++)
        {
            cin>>arr[i];
        }
        cout<<swapsreq(arr,n)<<endl;
    }
    return 0;
}
