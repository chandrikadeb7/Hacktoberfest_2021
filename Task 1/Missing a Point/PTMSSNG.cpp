#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int
#define forI(x , n) for(ll i = x ; i < n ; i++)

using namespace std;	
	
void fun()
{
	unordered_map<ll,ll>xm, ym;
	ll n;
	cin>>n;
	ll x, y;
	forI(0,(4*n-1))
	{
	cin>>x>>y;
	if(xm.find(x)!=xm.end())
	xm.erase(x);
	else xm[x]++;
	
	if(ym.find(y)!=ym.end())
	ym.erase(y);
	else ym[y]++;
	}
	cout<<xm.begin()->first<<" "<<ym.begin()->first;
	
		
}	
int main()
{	
		
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t=0;
	cin>>t;
	while(t--)
	{
		fun();
		cout<<"\n";
	}
	return 0;
}	
