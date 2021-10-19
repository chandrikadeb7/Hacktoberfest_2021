#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define lb long double
#define all(x) x.begin(),x.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(i,n) for(i=0;i<n;i++)
#define foi(i,a,n) for(i=a;i<n;i++)
#define fod(i,a,n) for(i=n-1;i>=a;i--)
#define     minv(v)     *min_element(v.begin(),v.end())
#define     maxv(v)     *max_element(v.begin(),v.end())
#define mpp map<ll,ll> 
#define pll pair<ll, ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vs vector<string>
#define mod (ll)(1e9+7)
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
//  order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).
int tt=1;

/* Template taken from tourist*/
string to_string(string s){return '"'+s+'"';}
string to_string(const char* s){return to_string((string)s);}
string to_string(bool b){return(b?"true":"false");}
template<typename A,typename B>
string to_string(pair<A,B>p){return"("+to_string(p.first)+", "+to_string(p.second)+")";}
template<typename A>
string to_string(A v){bool z=true;string r="{";for(const auto &x:v){if(!z){r+=", ";}z=false;r+=to_string(x);}r+="}";return r;}
void debug_out(){cerr << endl;}
template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T){cerr << " " << to_string(H);debug_out(T...);}
#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 0
#endif


string decimalToBinary(ll n)
{
    //finding the binary form of the number and
    //converting it to string.
    string s = bitset<64> (n).to_string();
     
    //Finding the first occurrence of "1"
    //to strip off the leading zeroes.
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}
 

void solve()
{
   ll n,i,j,k,c;
   vll v;
   cin>>c;
   string s=decimalToBinary(c);
//    debug(s);
   n=s.size();
   fo(i,n)
   {
       if(s[i]=='0')
       {
           ll a=n-i;
           ll m=pow(2,a);
           m--;
           v.pb(m);
           for(j=i;j<n;j++)
           {
               if(s[j]=='1')
               {
                   s[j]='0';
               }
               else
               {
                   s[j]='1';
               }
           }

       }
   }
   ll m=pow(2,n);
   m--;
   v.pb(m);
   cout<<v.size()<<"\n";
   for(auto e:v)
   {
       cout<<e<<" ";
   }
   cout<<"\n";
//    debug(v);
//    debug(x);
   ll d=1;
//    ll f=pow(2,n);
//    ll g=pow(2,n);
//    g--;
//    debug(g,f);
   
}
int main()
{
    cout<<setprecision(19);
    fast
    cin>>tt;
    while(tt--)
    {
       solve();
    }
}