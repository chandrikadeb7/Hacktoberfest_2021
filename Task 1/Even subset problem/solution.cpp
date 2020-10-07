#include <iostream>
 
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,ans=0,k=0;
        cin>>n;
        int a[n];
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                k=i+1;
                ans=a[i];
                flag=false;
                break;
            }
        }
        if(flag==false) {
            cout<<"1"<<"\n";
            cout<<k;
        }
        else if(n==1)cout<<"-1";
        else {
            cout<<"2"<<"\n";
            cout<<"1 2";
        }
        cout<<"\n";
    }
    
    
}