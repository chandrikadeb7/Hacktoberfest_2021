```cpp
class Solution {
public:
    int jump(vector<int>& nums) {
        int cur = 0, prev = 0, count = 0;
        for(int i = 0; i < nums.size()-1; ++i)
        {
			//find the current max step
            cur = max(cur, i+nums[i]);
			//check if reach the top
            if(cur >= nums.size()-1)
                return count+1;
			//if pass the previous step, then jump
            if(i == prev)
            {
                prev = cur;
                ++count;
            }
        }
        return count;
    }
};
```
