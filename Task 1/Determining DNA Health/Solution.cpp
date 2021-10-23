#include <bits/stdc++.h>

using namespace std;

using namespace std;
struct dna 
{
    int a[26];
    vector<int>v;
    int b,c,d[26];
    char ch;
};
const int MAX=2e6+5;
dna gene[MAX];int health[MAX],s;
void add_string(const string &str,int in) 
{
    int temp=0;
    for(size_t i=0;i<str.length();i++) 
    {
        int p=str[i]-'a';
        if(gene[temp].a[p]==-1) 
        {
            memset(gene[s].a,255,sizeof(gene[s].a));
            memset(gene[s].d,255,sizeof(gene[s].d));
            gene[s].c=-1;
            gene[s].b=temp;
            gene[s].ch=p;
            gene[temp].a[p]=s++;
        }
        temp=gene[temp].a[p];
    }
    gene[temp].v.push_back(in);
}
int go(int x,int y);
int get_link(int temp) 
{
    if(gene[temp].c==-1) 
    {
        if(temp==0||gene[temp].b==0)        gene[temp].c=0;
        else        gene[temp].c=go(get_link(gene[temp].b),gene[temp].ch);
    }
    return gene[temp].c;
}
 
int go(int x,int y) 
{
    if(gene[x].d[y]==-1) 
    {
        if(gene[x].a[y]!=-1)        gene[x].d[y]=gene[x].a[y];
        else        gene[x].d[y]=((x==0)?0:go(get_link(x),y));
    }
    return gene[x].d[y];
}
int main() 
{
    gene[0].b=gene[0].c=-1;
    memset(gene[0].a,255,sizeof(gene[0].a));
    memset(gene[0].d,255,sizeof(gene[0].d));
    s=1;int n;cin>>n;
    for(int i=0;i<(int)n;i++) 
    {
        string str;cin>>str;
        add_string(str,i);
    }
    for(int j=0;j<(int)n;j++)       cin>>health[j];
    int e;cin>>e;
    long long min=0,m=0;
    for(int k=0;k<(int)e;k++) 
    {
        int l,r,count=0;cin>>l>>r;
        string str2;cin>>str2;
        long long sum=0;
        for(char chr:str2) 
        {
            count=go(count,(int)(chr-'a'));
            int temp=count;
            while(temp!=0) 
            {
                for(int i:gene[temp].v) 
                {
                    if(i>=l&&i<=r)      sum+=health[i];
                }
                temp=get_link(temp);
            }
        }
        if(k==0||sum>m)     m=sum;
        if (k==0||sum<min)        min=sum;
    }
    cout<<min<<" "<<m;
    return 0;
}
