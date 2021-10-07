class Solution {
    public boolean search(int[] nums, int target) {
         int start = 0;
    int end= nums.length-1;

    
    while(start <= end){
        
        int mid = start + (end-start)/2;
        
        if(nums[start]== target || nums[end] ==target || nums[mid]==target) return true;
        
        if(nums[mid] > nums[start]){
            if(nums[start] <= target && target <= nums[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        else if(nums[mid] < nums[start]){
            if(nums[mid] <= target && target <= nums[end]){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        else start++;
           
    }
    
return false;
    }
}
