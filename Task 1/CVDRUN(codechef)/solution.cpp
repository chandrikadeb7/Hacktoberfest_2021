#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define debo(x) cout << x << endl



int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t, n, i, k, x, y,ans;

    cin >> t;
    while (t--) {
        cin >> n >> k >> x >> y;
        int a[n];
        ans = 0;
        fo(i,n){
            a[i]=0;
        }
        a[x]=1;
        i=0;
        while(1){
            if(x == y){
                ans = 1;
                break;
            }
            if(y==0){
                ans = 0;
                break;
            }
            if(a[(x+k)%n] == 1){
                ans = 0;
                break;
            }
            a[(x+k)%n] = 1;
            if(((x+k)%n)== y){
                ans = 1;
                break;
            }
            x = (x+k)%n;
            //debo(i);
            i++;
        }
        if(ans==1){
            debo("YES");
        }
        else if(ans==0){
            debo("NO");
        }
    }
return 0;
}