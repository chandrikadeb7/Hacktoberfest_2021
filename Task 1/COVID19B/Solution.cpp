#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<string>
#include<map>
#include<limits.h>
using namespace std;
#define endl "\n"
#define ll long long
#define fast(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int N = 1e5 + 5;
const unsigned int M = 1000000007;
ll v[N],b[N];
    			
vector<bool> infected(6,false);	

void dfs(int i,double time1,int n)
{
  for(int j=1;j<=n;j++)
    {  if(j==i or v[i]==v[j])
      continue;
       double time2=double(j-i)/(v[i]-v[j]);
       if(time2>0 and time2>time1)
        { 
          infected[j]=true;
          dfs(j,time2,n);
        }
    }
}
void solve()
{
  int n,flag=0,worst=INT_MIN,best=INT_MAX,count=0; cin>>n;
  for(int i=1;i<=n;i++)
  	cin>>v[i];

  for(int i=1;i<=n;i++)
  {  
    infected[i]=true;
    double time1=0;
    dfs(i,time1,n);
     
     for(int l=1;l<=n;l++)
      {   
        if(infected[l])
          count++;
      }
       best=min(count,best);
       worst=max(count,worst);
       count=0;
       fill(infected.begin(), infected.end(), 0);
  }

    cout<<best<<' '<<worst;
}
 
int32_t main ()
{
  fast();
  int t;
  cin >> t;
  while (t--)
    {
      solve ();
      cout << endl;
    }
  return 0;
}