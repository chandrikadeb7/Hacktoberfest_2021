#include<iostream>
#include<limits.h>
#include<map>
using namespace std;


int main()
 {  
 	int n; cin>>n;
 	int a[n];
 	map<int,int>m;
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 		m[a[i]]++;
 	}
     
     int maxleft=INT_MIN,minright=INT_MAX,flag=0;

      for(int i=1;i<n-1;i++)
      { 
      	maxleft=max(maxleft,a[i-1]);      
       	--m[a[i-1]];                          
         if(m[a[i-1]]==0)                  
         	m.erase(a[i-1]);              
        auto it=m.begin();                   
        it++; 
          minright=it->first; 
         if(a[i]>maxleft and a[i]<minright)
          {
          	cout<<1;
            flag=1;
          	break;
          }
      } 

      if(!flag)
        cout<<0;

   return 0;
 }