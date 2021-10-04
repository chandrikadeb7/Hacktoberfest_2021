#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binSearch(int *a,int l,int h,int k)
{
    int ans=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(k+a[mid]>0)
        {
            ans=mid;
            h=mid-1;
        }
        else
        l=mid+1;
    } 
    return ans;
}

long long ValidPair(int a[], int n) 
{ 
    sort(a,a+n);
	int i;
    long long c=0;
    for(i=0;i<n-1;i++)
    {
        int j=binSearch(a,i+1,n-1,a[i]);
        if(j!=-1)
        c+=n-j;
    }
    return c;
}   


int main()
{
    int n;
    cin>>n;

    int i,a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<ValidPair(a,n);

    return 0;
}
