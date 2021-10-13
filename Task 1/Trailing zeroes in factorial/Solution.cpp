
#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    int trailingZeroes(int N)
    {
       
    int count = 0;
    for (int i = 5; N / i >= 1; i *= 5)
        count += N / i;
 
    return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
} 
