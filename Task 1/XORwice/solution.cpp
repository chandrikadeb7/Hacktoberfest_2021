#include<bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define maxv(b) *max_element(b.begin(),b.end())
typedef long long ll;
using namespace std;
//--------sort ------max-min---------
#define sortad(a,n) 		sort(a,a+n,greater<int>())
#define sortaa(a,n)			sort(a,a+n)
#define sortva(v) 			sort(v.begin(),v.end())
#define sortvd(v) 			sort(v.begin(),v.end(),greater<int>())
#define maxv(b) 			*max_element(b.begin(),b.end())
#define minv(b) 			*min_element(b.begin(),b.end())
//-------scanf--------
#define scan4(t,w,a,b) 		scanf("%lld%lld%lld%lld",&t,&w,&a,&b)
#define scan3(t,w,a) 		scanf("%lld%lld%lld",&t,&w,&a)
#define scan2(t,w) 			scanf("%lld%lld",&t,&w)
#define scan(t) 			scanf("%lld",&t)
#define w(x)            	ll x; cin>>x; while(x--)
//----printf----------
#define pf(t) 				printf("%lld\n",t)
#define	deb1(x) 				cout << #x << "=" << x << endl
#define deb2(x, y) 			cout << #x << "=" << x << "," << #y << "=" << y << endl
//--------------------
#define endl 				'\n'
#define eb(t) 				emplace_back(t)
#define F 					first
#define S 					second
#define clr 				clear()
#define mp 					make_pair
//typedef pair<ll, ll>		pl

//---------for---------
#define Fo(i,k,n) 			for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define f(i,n) 				for( i=0;i<n;i++)
#define itr(it, a) 			for(auto it = a.begin(); it != a.end(); it++)
#define cnt 				continue
//--------const-------
#define PI 	3.1415926535897932384626
//--------------
ll  solve()
{ 
   ll n,k;
   scan2(n,k);
   ll i=0;
   ll temp;
   vector<ll> a;
   for(i=0;i<n;i++)
   {
       scan(temp);
       a.eb(temp);

   }
   sortva(a);
   ll count=0;
   temp=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i] > k)
       cnt;
       else
       {
           ll temp2=abs(a[i]-k);
            ll temp3=temp2 / temp;
            count +=temp;
       }
   }


return count;

}
int main()
{
        w(x)
        {
            ll res=solve();
            pf(res);

        }	
return 0;
}
