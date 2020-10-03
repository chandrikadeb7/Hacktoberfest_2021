#include<bits/stdc++.h>
using namespace std;

#define T(t) while(t--)
#define rep(i,b,e) for(int i=b;i<=e;i++)
#define rest(arr,n) memset(arr,n,sizeof arr)

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	T(t)
	{
		int N,K;
		cin>>N>>K;
		int F[1001],fw[1001],bw[1001],cnt[101];
		rep(i,0,N-1)cin>>F[i];
		rep(i,0,N)fw[i]=K;
		fw[0]=0;
		rest(cnt,0);
		int g=0;
		rep(i,1,N)
		{
			int xx=cnt[F[i-1]];
			cnt[F[i-1]]++;
			if(cnt[F[i-1]]>1){
			g+=cnt[F[i-1]] ;
			if (xx>1)
			   g-=xx;
			}
			fw[i]=fw[i]+g;
		}
		rest(cnt,0);
		int all=1;
		rep(i,0,N-1)
		{
		    cnt[F[i]]++;
		    if (cnt[F[i]]>1)
		    {
		        all+=1;
		        rest(cnt,0);
		        cnt[F[i]]++;
		    }
		}
		all*=K;
		int no=g+K;
		int p=min(all,no);
		rest(cnt,0);
		rep(i,0,N)bw[i]=K;
		bw[N]=0;
		g=0;
		for(int i=N-1;i>=0;i--)
		{
			int xx=cnt[F[i]];
			cnt[F[i]]++;
			if(cnt[F[i]]>1){
			g+=cnt[F[i]] ;
			if (xx>1)
			   g-=xx;
			}
			bw[i]=bw[i]+g;
		}
		int s=1e9;
		int tmp;
		rep(i,0,N)
		{
			tmp=fw[i]+bw[i];
	 		if (tmp<s)
			   s=tmp;	
		}
		cout<<min(s,p)<<"\n";
	}
	
	return 0;
}
