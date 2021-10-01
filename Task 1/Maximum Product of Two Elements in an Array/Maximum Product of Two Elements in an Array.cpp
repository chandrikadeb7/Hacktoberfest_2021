class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result=0,n=nums.size()-1;
        sort(nums.begin(), nums.end()); 
        result=((nums[n] - 1) * (nums[n-1] - 1));
        return result; 
    }
};
