#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s.insert(a);
        }
        int len=s.size();
        set<int>::iterator f;
        f = s.begin();
        if(*f==0)
            cout<<len-1<<"\n";
        else
            cout<<len<<"\n";
            
    }
    return 0;
}
