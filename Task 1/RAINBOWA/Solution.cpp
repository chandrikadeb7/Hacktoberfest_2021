#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=1;
        cin>>n;
        int a[n],p1=0,p2=n-1;
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(a[p1]!=1)
            flag=0;
        else
            while(p1<p2)
            {
                if(a[p1]!=a[p2])
                {
                    flag=0;
                    break;
                }
                if(a[p1]!=a[p1+1] && a[p1]+1 != a[p1+1])
                {
                    flag=0;
                    break;
                }
                p1+=1;
                p2-=1;
            }
        if(a[p1]!=7)
            flag=0;
       if(flag==1)
        cout<<"yes"<<"\n";
       else
        cout<<"no"<<"\n";
    }
    return 0;
}
