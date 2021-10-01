import java.util.Scanner;

class Solution{
    public static int findDuplicate(int[] nums) {
        int i=0;
        while(i<nums.length){
            if(nums[i] != nums[nums[i]-1]){
                swap(nums, i, nums[i]-1);
            }
            else{
                i++;
            }
        }
        return nums[nums.length-1];
    }
    
    static void swap(int[] arr, int a, int b){
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    public static void main(String[] args) {

        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Length of Array: ");
        n = sc.nextInt();

        int[] nums = new int[n];
        System.out.print("Input: ");
        for (int i=0; i<n; i++){
            nums[i] = sc.nextInt();
        }

        System.out.println("Output: " + findDuplicate(nums));
    }
}