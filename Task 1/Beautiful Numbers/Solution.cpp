#include <bits/stdc++.h>
#define int long long
using namespace std;
int p=1e6+1;
int m=1e9+7;
int fac[1000001];
int binaryexponentiation(int a,int b,int m){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return binaryexponentiation(((a%m)*(a%m))%m,b/2,m);
    }
    return ((a%m)*(binaryexponentiation(((a%m)*(a%m))%m,(b-1)/2,m))%m)%m;
}
int ncr(int n,int r){
    int temp1=fac[n];
    int temp2=fac[n-r]*fac[r];
    temp2%=m;
    int temp3=binaryexponentiation(temp2,m-2,m);
    temp1*=temp3;
    temp1%=m;
    return temp1;
}
int32_t main(){
    fac[0]=1;
    for(int i=1;i<p;i++){
        fac[i]=fac[i-1]*i%m;
    }
    int a,b,n;
    cin>>a>>b>>n;
    int ans=0;
    for(int i=0;i<=n;i++){
        int sum=(a*i)+((n-i)*b);
        int f=0;
        while(sum>0){
            int d=sum%10;
            if(d==a||d==b){

            }else{
                f=1;
                break;
            }
            sum/=10;
        }
        if(f==0){
            ans+=ncr(n,i);
            ans%=m;
        }
    }

    cout<<ans<<endl;
}
