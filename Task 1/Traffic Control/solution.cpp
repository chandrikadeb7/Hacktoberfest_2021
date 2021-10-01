#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

int main(){
    FIO;
    ll t;
    cin>>t;
    ll i,j;
    for(int testcase=1;testcase<=t;testcase++){
        cout << "Case #" << testcase << ": ";
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        ll ans = n+m-1;
        if(ans>a or ans>b){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<"Possible"<<endl;
            ll arr[n][m];
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    arr[i][j] = 1;
                }
            }
            arr[n-1][0] = b-m-n+2;
            arr[n-1][m-1] = a-m-n+2;
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }


    }
	return 0;
}
