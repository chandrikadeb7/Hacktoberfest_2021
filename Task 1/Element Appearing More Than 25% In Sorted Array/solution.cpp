class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size(), i, c = 1;
        
        for(i = 1; i < n; i++){
            if(arr[i] == arr[i-1])
                c++;
            else{
                if(c > n/4)
                    return arr[i-1];
                else
                    c = 1;
            }
        }
        if(c > n/4)
            return arr[n-1];
        
        //Control never reaches here
        return -1;
    }
};
