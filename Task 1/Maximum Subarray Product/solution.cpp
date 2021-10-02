#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//function for finding maximum subbarray
int solve(vector<int>arr){
    int maxsum=1,minsum=1,ans=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0)
        swap(maxsum,minsum);
        maxsum=max(arr[i],maxsum*arr[i]);
        minsum=min(arr[i],minsum*arr[i]);
        ans=max(ans,maxsum);
    }
    return maxsum;
}

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<solve(arr);
	return 0;
}