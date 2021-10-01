#include<bits/stdc++.h>
using namespace std;
#define fo(i, n) for(i=0;i<n;i++)
#define ll long long
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    ll int n, k; // long long because n, k goes till 10^9 
    cin >> n >> k; 

    ll int nmax = n-(k-1); 
    ll int kmax = nmax*(nmax-1)/2;

    int sz = n/k;
    int rem = n%k; // this will not cross 10^9 mark so no ll int
    ll int kmin = rem*(sz+1)*(sz)/2 + (k-rem)*sz*(sz-1)/2; 
    cout << kmin << " " << kmax;

    return 0;
}
