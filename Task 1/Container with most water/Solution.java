class Solution {
    // function to calculate container with most water
    public int maxArea(int[] height) {
        int maxwater = 0, left = 0, right = height.length - 1;
        while (left < right) {
            maxwater = Math.max(maxwater, Math.min(height[left], height[right]) * (right - left));
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxwater;
    }
}