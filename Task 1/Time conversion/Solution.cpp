#include <bits/stdc++.h>

using namespace std;
int main()
{
string s;cin>>s;
  int h1 = (int)s[1] - '0'; 
    int h2 = (int)s[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10); 
if(s[8]=='A')
{
    if(hh==12)
    {cout<<"00";
    for(int i=2;i<8;i++)
    cout<<s[i];}
    else
     for(int i=0;i<8;i++)
    cout<<s[i];
}
 else
{
    if(hh==12)
    for(int i=0;i<8;i++)
    cout<<s[i];
    else{
        cout<<hh+12;
        for(int i=2;i<8;i++)
    cout<<s[i];
    }
}
return 0;
}
