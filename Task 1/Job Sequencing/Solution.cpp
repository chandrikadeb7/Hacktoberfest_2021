#include<iostream>
#include<algorithm>
using namespace std;
struct job{
    int id,deadline,profit;
};

bool compare(job j1,job j2)
{
    return j1.profit>j2.profit;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<job> j(n);
	    int maxdeadline=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>j[i].id>>j[i].deadline>>j[i].profit;
	        maxdeadline = max(maxdeadline,j[i].deadline);
	    }
	    vector<bool> occupied(maxdeadline,false);
	    sort(j.begin(),j.end(),compare);
	    int maxprofit=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        int index = j[i].deadline;
	        index=index-1;
	        while(index>=0)
	        {
	            if(occupied[index]==false)
	            {
	                count++;
	                occupied[index]=true;
	                maxprofit+=j[i].profit;
	                break;
	            }
	            else
	            {
	                index--;
	            }
	        }
	    }
	    cout<<count<<" "<<maxprofit<<endl;
	}
	return 0;
}
