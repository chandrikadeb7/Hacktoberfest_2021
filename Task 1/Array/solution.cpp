#include<iostream>
using namespace std;
int findsum(int arr[], int n) {
	    // code here
	    int sum =1;
	    for (int i = 0; i < n; i++)  
    sum *= arr[i];  
  
    return sum; 
	    
	     
	    
	}

 
// Driver code 
int main() 
{ 
    int t;
	cin>>t;
	while(t--){
	    int n,i;
	     
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    // and add them to sum
	    int ans = findsum(arr,n);
	    cout<<ans<<endl;
	}
	
	    return 0;
	
}
