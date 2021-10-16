public class FloorOfANumber {

    public static void main(String[] args) {
        int[] arr = {9, 11, 19, 22,23,24};
        int target = 20;
        int ans = floor(arr, target);
        System.out.println(ans);
    }

    static int floor(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while(start <= end) {
            // finding the middle element
            int mid = (start + end) / 2;
            if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                // ans is found
                return mid;
            }
        }
        return end;
    }
}
