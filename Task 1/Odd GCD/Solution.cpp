#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans = INT_MAX;
        int done= 0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==1){
                cout<<0<<endl;
                done=1;
                break;
            }
        }

        if(done==0){
            for(int i=0;i<n;i++){
                int res=0;
                while(arr[i]%2==0){
                    arr[i] /= 2;
                    res++;
                }
                ans = min(ans,res);
            }
            cout<<ans<<endl;
        }    
    }
    return 0;
}
