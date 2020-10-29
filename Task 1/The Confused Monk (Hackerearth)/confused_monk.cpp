#include<iostream>
using namespace std;

static int M = (int)1e9+7;

long gcd(long a,long b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

long powe(long a,long b) {
	if(b==0) return 1;
	if(b==1) return a%M;
	long halfpow = powe(a,b>>1);
	long fullpow = halfpow*halfpow%M;
	if((b&1)==1) return fullpow*a%M;
	return fullpow%M;
}

void main(){
	long n;
	cin>>n;
	long a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	long g = a[0];
	for(int i = 1;i<n;i++)
	{
		g = gcd(g,a[i]);
	}

	long f = a[0];
	for (int i = 1; i < n; ++i)
	{
		f = f*a[i]%M;
	}

	long result = powe(f,g);
	cout<<result;
}
