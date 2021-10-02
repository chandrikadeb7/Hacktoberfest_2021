#include<bits/stdc++.h>
using namespace std;
//Initial template for C++

 // } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
       int dp[a][b];
        
        for(int i=0;i<a;i++){
            
            dp[i][0]=1;
        }
        for(int i=0;i<b;i++){
            
            dp[0][i]=1;
        }
        
        for(int i=1;i<a;i++){
            
            for(int j=1;j<b;j++){
                
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[a-1][b-1];
    }
};


// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}

  // } Driver Code Ends