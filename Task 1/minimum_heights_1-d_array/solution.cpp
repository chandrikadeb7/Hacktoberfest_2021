#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int a[], int n, int k) 
{
        sort(a,a+n);
        int i;
        int ans,max1,min1;
        ans=a[n-1]-a[0];
        max1=a[n-1]-k;
        min1=a[0]+k;
        for(i=1;i<n;i++)
        {
            if(a[i]>=k)
            {
                max1=max(a[i-1]+k,a[n-1]-k);
                min1=min(a[i]-k,a[0]+k);
                ans=min(ans,max1-min1);
            }
            
        }
        return ans;
}


int main()
{
    int k,n;
    cin>>k>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    cout<<getMinDiff(a,n,k);
    return 0;
}
