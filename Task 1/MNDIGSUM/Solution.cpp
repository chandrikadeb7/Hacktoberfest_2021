/*
	@author:kunduavik155
*/
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define ld long double
#define mp make_pair
#define mt make_tuple
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin() , (x).rend()
#define rep(n) for(int i=1;i<=n;i++)
#define repab(a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define F first
#define S second
#define endl "\n"
#define INF (ll)(1e9)
#define MOD (ll)(1e9 + 7)
#define PI  PI 3.1415926535897932384626433832795
#define set set
#define mset multiset
#define uset unordered_set
#define umset unordered_multiset
#define map map
#define mmap multimap
#define umap unordered_map
#define ummap unordered_multimap

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vll;
typedef vector<vll> vvll;
typedef pair<i64, i64> pll;
#define int long long
//-------------------------------------------//
int tobase(int n,int b,int minsum)
{
	int sum=0;
	
	while(n>0)
	{
		sum+=(n%b);
		if(sum>minsum)return INF;
		n/=b;
	}
	return sum;
}

signed main()
{
	fast;
    int test;
    cin>>test;
    
    while(test--)
    {
        int n,l,r,b;
        
		cin>>n>>l>>r;
        
        if(r>n)
		b=r;
		else if(l<=n and n<=r)
		b=n;
		else
		{
			int half=n/2+1;
			
			if((l>=half and r<n))
			b=r;
			else
			{
				int minsum=INF;
				
				//int temp=n;
				
				while(l<r and n/r <r)
				{
					int temp=n/r,temp2=n%r;
					if(minsum>temp+temp2)
					{
						minsum=temp+temp2;
						b=r;
					}
					r=n/(temp+1);
				}
				
				for(int i=r;i>=l;i--)
				{
					int sum=tobase(n,i,minsum);
					if(sum<minsum)
					{
						minsum=sum;
						b=i;
					}
					if(minsum==1)break;
				}
			}
		}      
		
		cout<<b<<endl;        
    }
}
   
