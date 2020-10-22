class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Compute the suffix array
        //Prepocessing stage
        int n = nums.size(), p = 1, i;
        //Declare an integer array of size n
        vector<int> suff(n, 0);
        
        for(i = n-1; i >=0; i--){
            p = p*nums[i];
            
            suff[i] = p;
        }
        
        //Actual computation
        //Declare result array
        vector<int> res(n, 0);
        
        p = 1;
        for(i = 0; i < n-1; i++){
            res[i] = p*suff[i+1];
            
            p = p*nums[i];
        }
        res[n-1] = p;
        
        return res;
        
    }
};