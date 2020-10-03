struct edge{
    int a;
    int b;
    int w;
};
class Solution {
public:
    #define pb  push_back
    #define  ff first
    #define  ss second 
    int par[1000005];
    int minCostConnectPoints(vector<vector<int>>& p) {
        int dp[1005][1005];
       
        memset(par,-1,sizeof(par));
        int i,j,l,n,m;
        n=p.size();
        edge e[1000001];
     
        int k=0;
        vector<pair<int,int>>v[1005];
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                 int x1,x2,y1,y2;
                x1=p[i][0];
                y1=p[i][1];
                x2=p[j][0];
                y2=p[j][1];
                dp[i][j]=abs(x1-x2)+abs(y1-y2);
                e[k].a=i;
                e[k].b=j;
                e[k].w=dp[i][j];
                k++;
                
                
            }
        }
       
        sort(e,e+k,[&](edge a,edge b)
             {
                 if(a.w<b.w)
                     return 1;
                 return 0;
             }
            );
        l=0;
        for(i=0;i<k;i++)
        {
            int a1=par1(e[i].a);
            int b1=par1(e[i].b);
            if(a1!=b1)
            {
                l+=e[i].w;
                merge(a1,b1);
            }
        }
        return l;
    }
    int par1(int a1)
    {
        if(par[a1]!=-1)
            return par[a1]=par1(par[a1]);
        return a1;
    }
    void merge(int a,int b)
    {
        par[a]=b;
    }
};
