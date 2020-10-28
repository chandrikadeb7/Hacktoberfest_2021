
// Leetcode - https://leetcode.com/problems/monotonic-array/

class Solution
{
public:
    bool isMonotonic(vector<int> &A)
    {
        bool increasing = true;
        bool decreasing = true;
        int n = A.size();

        for (int i = 0; i < n - 1; i++)
        {
            if (A[i] < A[i + 1])
                increasing = false;

            if (A[i] > A[i + 1])
                decreasing = false;
        }

        return increasing || decreasing;
    }
};
