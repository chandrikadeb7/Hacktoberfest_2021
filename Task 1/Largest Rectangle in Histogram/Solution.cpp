//For every bar 'x', we calculate the area with 'x' as the smallest bar in the rectangle.
//If we calculate such area for every bar 'x' and find the maximum of all areas, our task is done. 
//How to calculate area with 'x' as smallest bar? We need to know index of the first smaller (smaller than 'x') bar on left of 'x' and index of first smaller bar on right of 'x'.
//This ans is simply the maximum of height*(next_smaller_index - previous_smaller_index - 1)

class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> s;
        int max_a = 0;
        int n = h.size();
        vector<int> ns(n,n);
        vector<int> ps(n,-1);
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() and h[s.top()] >= h[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                ns[i] = s.top();
            }
            s.push(i);
            
        }
        s= stack<int> ();
        for(int i=0;i<n;i++)
        {
            while(!s.empty() and h[s.top()] >= h[i])
            {
                s.pop();
            }
            if(!s.empty())
            {
                ps[i] = s.top();
            }
            s.push(i);
            
        }
        
        for(int i=0;i<n;i++)
        {
            max_a = max(max_a,h[i]*(ns[i]-ps[i]-1));
        }
        return max_a;

    }
};
