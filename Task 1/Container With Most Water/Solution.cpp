#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

//Function to find maximum area held by container.
int maxArea(vector<int>& lines){
	
	//Here we are using two pointers i,j to keep track of lines.
	int i=0,j=lines.size()-1;
	int width=0, height=0, area=INT_MIN;
	 
	 
	while(i<j){
	 	width=j-i;
	 	// The smaller line will determine the height of container.
	 	height=min(lines[i],lines[j]);
	 	
	 	if((height*width) >area)
	 	   {area=height*width;}

	 	// If the max area is in the range between i and j, then its heights, 
	 	// both should be bigger than lines[i] and lines[j].So we just abandon
	 	// the smaller one. This operation can make sure we are heading to the max area.
	 	if(lines[i]<lines[j]){    
           int k=i+1;
           while(lines[k]<lines[i])
                    k++;
           i=k;}
        else {
            int k=j-1;
            while(lines[k]<lines[j])
                    j--;
            j=k;}
            
        }
   return area;  
	 
}

 int main(){
  	int n,ans;
  	cin>>n;
  	vector<int> lines(n);
  	for(int i=0;i<n;i++){
  		cin>>lines[i];
  	}
  	ans=maxArea(lines);
  	cout<<ans<<"\n";
  	
  	return 0;
  }
