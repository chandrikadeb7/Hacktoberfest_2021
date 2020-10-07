#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n" 
#define long int64_t
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)
int soln()  
{  
    int n,k;
    cin>>n>>k;
    if(k > n) return 0;
    int ans = 0;  
    while (n % 2 == 0)  
    {  
        ans++; 
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            ans++;
            n = n/i;  
        }  
    }  

    if (n > 2)  
        ans++;  

    if(ans >= k) return 1;
    return 0;
}  
  
/* Driver code */
int main()  
{  
    int t;
    cin>>t;
    while(t--) {
        
        int ans = soln();
        cout<<ans<<endl;
    }
    return 0;  
}
