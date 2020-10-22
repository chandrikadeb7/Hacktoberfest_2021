#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int a;
 float b,x;
 cin>>a>>b;
 if(a%5==0&&b>(a+0.5))
  {x=b-0.5-a;
     cout<<std::setprecision(2)<<fixed<<x;}
  else cout<<std::setprecision(2)<<fixed<<b;
  return 0;
  }
