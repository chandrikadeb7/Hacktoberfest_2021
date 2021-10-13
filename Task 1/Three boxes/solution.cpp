#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int a,b,c,d;
	   cin>>a>>b>>c>>d;
	   int count =3;
	   if(a+b+c<=d){
	       count=1;
	   }
	   if((a+b)<=d and (a+b+c)>d){
	       count=2;
	   }
	   cout<<count<<endl;
	}
	return 0;
}
