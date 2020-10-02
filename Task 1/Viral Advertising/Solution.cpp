#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,s=5,sum=0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        sum += floor(s/2);
        s = floor(s/2) * 3;
    }
    cout<<sum;
    return 0;
}