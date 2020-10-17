#include<cstdio>
#include<stack>
using namespace std;
#define N 200500
stack<int> st[27];
int n,tr[N],p[N];
char s[N];
long long as;
void add(int x){for(int i=x;i<=n;i+=i&-i)tr[i]++;}
int que(int x){int as=0;for(int i=x;i;i-=i&-i)as+=tr[i];return as;}
int main()
{
	scanf("%d%s",&n,s+1);
	for(int i=1;i<=n;i++)st[s[i]-'a'].push(i);
	for(int i=1;i<=n;i++)p[n-i+1]=st[s[i]-'a'].top(),st[s[i]-'a'].pop();
	for(int i=n;i>=1;i--)as+=que(p[i]),add(p[i]);
	printf("%lld\n",as);
}
