//Link to the Problem https://www.codechef.com/SEPT20A/problems/FINXOR
#include<stdio.h>
#define ll long long
int main(){
    ll t,n,s,temp,ans,res;
    temp=1<<20;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ll end_val=19;
        printf("1 %lld\n",temp);
        fflush(stdout);
        scanf("%lld",&s);
        s=s-(n*temp);
        if(s==-1)exit(0);
        int arr[end_val+1];
        arr[0]=s%2;
        for(int i=1;i<=end_val;i++){
            printf("1 %lld\n",(1<<i));
            fflush(stdout);
            ll s1;
            scanf("%lld",&s1);
            if(s1==-1) exit(0);
            ll even=(((s1-s)>>i)+n)>>1;
            ll odd=n-even;
            arr[i]=odd%2;        }
        ans=0;
        for(int i=end_val;i>=0;i--) ans=ans*2+arr[i];
        printf("2 %lld\n",ans);
        fflush(stdout);
        scanf("%lld",&res);
        if(res==-1) exit(0);
    }
}