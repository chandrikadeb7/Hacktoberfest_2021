#include <bits/stdc++.h>
using namespace std;

int triangularNumber(vector<int> &nums)
{

    int ans = 0;
    //Sorting the number to apply three sum concept
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int h = i - 1;
        while (l < h)
        {

            int s = nums[l] + nums[h];

            if (s > nums[i])
            {
                //If nums[i] + nums[j] is larger than nums[k], we know that there will be j - i combination
                ans += h - l;

                h--;
            }
            else
            {
                l++;
            }
        }
    }
    return ans;
}

int main()
{
    int n; //size of array
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int result = triangularNumber(nums);
    cout << result;
    return 0;
}
