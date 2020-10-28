#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;
int used;
long long k,x,p,n;

long long locof(vector<long long> & v,long long a)
{ long long mx=-1,mn=1000000009;
long long i=0;
if(x==v[p])
return p;
for(;i<n;i++)
{
        if(v[i]==a)
        { 
            if(mn>i)
            {mn =i;}
        if(mx<i)
            {
                mx=i;}
        }
   
}

if(x<v[p])
return mx;
if(x>v[p])
return mn;//


}
void solve(vector<long long> &v)
{ 
     long long f=0;
    
sort(v.begin(),v.end());
	if(used==-1)
{	 v[k]=x;f=1;
     used=1;}
    
sort(v.begin(),v.end());

     long long l=locof(v,x);
     
	
if(k==p)
			{     if(f==1)
			            {
			             cout<<abs(l-k)+1<<endl;
			             return;
			             }
   
			      else   if(f==0 )	
					  {
					  	cout<<abs(l-k)<<endl;
					  	return;
					  }
				  else
				  { cout<<"-1"<<endl;
				  return;
						  }
					}
	else if (k<p)
					{
					   if (x<v[p])
					   {cout<<"-1"<<endl;
					   return;
					   }
		   
		  else {
		   	if( f==0)
		   	{ cout<<l-p<<endl;
		   	 return;
		   	}
		   	else if(f==1)
		   	{
		   		 cout<<l-p+1<<endl;
		   		 return;
		   	}
		   	else
		   	{ 
		   	  cout<<"-1"<<endl;
		   	  return;
		   	}
		   }
}
   else if (p<k)
			{
			   if (x>v[p])
			   {cout<<"-1"<<endl;
			   return;
			   }
			  
			  else 
			   {
			   	if(f==0)
			   	{ cout<<p-l<<endl;
			   	
			   	 return;
			   	}
			   	else if( f==1)
			   	{
			   		 cout<<p-l+1<<endl;
			   		 
			   		 return;
			   	}
			   	else
			   	{ 
			   	  cout<<"-1"<<endl;
			   	 
			   	  return;
			   	}
			   }
			}
}
int main()
{  
int tc;
cin>>tc;
while(tc--)
{ used=-1;
     cin>>n>>x>>p>>k;
     k=k-1;
     p=p-1;
     vector<long long> v;
     for(long long  i =0;i<n;i++)
     {
     	long long  a;
     	 cin>>a;
     	 if(a==x)
     	 used=1;
     	 v.push_back(a);
     }
     solve(v);
}
}
