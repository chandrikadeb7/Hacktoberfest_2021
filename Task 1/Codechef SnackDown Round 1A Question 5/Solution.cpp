//Link https://www.codechef.com/SNCK1A21/problems/EQBEAUTY
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long int
int main() {
	// your code goes here
	ll tc;
	cin>>tc;
	while(tc--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(n==1||n==2)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    if(n==3)
	    { 
	        cout<<min(a[1]-a[0],a[2]-a[1])<<endl;
	        continue;
	        
	    }
	    ll left=1;
	    ll right=n-2;
	    ll mini=INT_MAX;
	    ll mid1=a[(n-1)/2];
	    ll mid2=a[((n-1)/2)+1];
	    ll sum1=0;
	    ll sum2=0;
	    for(ll i=0;i<n-1;i++)
	    {
	        sum1+=abs(a[i]-mid1);
	    }
	      for(ll i=1;i<n;i++)
	    {
	        sum2+=abs(a[i]-mid2);
	    }
	    mini=min(sum1,sum2);
	    while(left<right)
	    {
	        ll diff1=a[right]-a[0];
	        ll diff2=a[n-1]-a[left];
	        mini=min(mini,abs(diff2-diff1));
	        if(diff1<diff2)
	        {
	            left++;
	        }else{
	            right--;
	        }
	    }
	    cout<<mini<<endl;
	}
	return 0;
}
