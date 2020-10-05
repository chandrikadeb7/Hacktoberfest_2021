class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==0)
           return 0;
        int longestyet[nums.size()];
        for(int j=0;j<nums.size();j++)
            longestyet[j]=1;
        int i=0,longest=1;
        for(int j=1;j<nums.size();j++)
        {
            i=0;
            while(i<j)
            {
                if(nums[i]<nums[j])
                {
                longestyet[j]=max(longestyet[j],longestyet[i]+1);
                longest=max(longest,longestyet[j]);
                }
                i++;
            }
        }
        return longest;
    }
};
