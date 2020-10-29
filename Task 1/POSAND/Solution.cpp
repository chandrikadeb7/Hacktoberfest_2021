#include <iostream>
#include <vector> 

using namespace std;
vector<int> a(100001);

void solve()
{
    int n;
    cin>>n;
    
    if(n==1) //n=1
    {
        cout<<1<<"\n";
        return;
    }
    
    if((n&(n-1)) == 0) //power of 2
    {
        cout<<-1<<"\n";
        return;
    }
    
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

int main() {
    
    for(int i=1;i<=100000;i++)
        a[i]=i;
        
    a[1]=2, a[2]=3, a[3]=1;
    
    for(int i=4; ;i*=2)
    {
        if(i+1 > 100000)
            break;
        
        swap(a[i], a[i+1]);
    }
    
    int tc;
    cin>>tc;
    while(tc--)
        solve();
}