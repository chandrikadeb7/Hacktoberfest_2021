class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long l = 0, r = nums.size() - 1;
        
        while(l <= r){
            long long m = (l+r)/2;
            
            if(target == nums[m])
                return m;
            
            if(target > nums[m])
                l = m + 1;
            
            else 
                r = m - 1;
        }
        if (r < l)
            return l;
        else 
            return r;
    }
};