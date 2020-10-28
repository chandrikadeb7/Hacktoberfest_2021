class Solution {
    public void sortColors(int[] nums) {
        int i = 0,j = nums.length - 1,k = 0;
        while(k <= j){
            if(nums[j] == 2){j--;}
            else if(nums[k] == 1){k++;}
            else if(nums[k] == 2){
                swap(nums,k,j);
                j--;
            }
            else if(nums[k] == 0){
                swap(nums,k,i);
                if(i == k){i++;k++;}
                else i++;
            }
        }
        for(int x:nums)System.out.print(x+" ");
    }
    static void swap(int nums[],int i,int j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
