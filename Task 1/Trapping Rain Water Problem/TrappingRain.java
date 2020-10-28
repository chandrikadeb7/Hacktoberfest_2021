class TrappingRain {
    public int trap(int[] height) {
        int totalAmount = 0;
        if (height == null || height.length == 0) {
            return totalAmount;
        }
        
        int[] leftHighest = new int[height.length + 1];
        leftHighest[0] = 0;        
        for (int i = 0; i < height.length; i++) {
            leftHighest[i + 1] = Math.max(leftHighest[i], height[i]);            
        }
        
        int rightHighest = 0;
        for (int i = height.length - 1; i >= 0; i--) {
            rightHighest = Math.max(height[i], rightHighest);
            totalAmount += Math.min(leftHighest[i], rightHighest) > height[i] ? Math.min(leftHighest[i], rightHighest) - height[i] : 0;            
        }
        
        return totalAmount;
    }
}