#include <iostream>
using namespace std;

int main() {
    long int t;
    cin>>t;
    while(t--)
    {   
        int c = 0;
        int i = 0;
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        long long int p = 0;
        long long int d = 0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] >= k){
                p = a[i]-k;
                a[i+1] += p;
            }
            else{
                c = i + 1;
                break;
            }
        }
        if(c==0){
            d = a[n-1]/k;
            cout<<n+d<<"\n";
        }
        else
            cout<<c<<"\n";
        
    }
    return 0;
}
