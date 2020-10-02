#include<bits/stdc++.h>
#define ll long long
#define f(a,b) for(int i=a;i<b;i++)
using namespace std;
void FASTIO()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return;
}
int main()
{
    FASTIO();
int n,m;
cin>>n>>m;
long long int arr[n],brr[m];
f(0,n)
cin>>arr[i];
f(0,m)
cin>>brr[i];
long long int om,mi=LLONG_MAX;
for(int i=0;i<n;i++)
{
    if(mi>arr[i])
    {
        mi=arr[i];
        om=i;
    }
}
long long int on,ma=LLONG_MIN;
for(int i=0;i<m;i++)
{
    if(ma<brr[i])
    {
        ma=brr[i];
        on=i;
    }
}
for(int i=0;i<m;i++){
    
cout<<om<<" "<<i<<'\n';
}
for(int i=0;i<n;i++){
    if(i==om)
    continue;
cout<<i<<" "<<on<<"\n";
}
    return 0;
}
