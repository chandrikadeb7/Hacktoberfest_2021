void sortColors(vector<int>& nums) {
    int low = 0, traverse = 0, high = nums.size() - 1;
    while (traverse <= high) {
        if (nums[traverse] == 0) {
            swap(nums[traverse], nums[low]);
            traverse++; low++;
        }
        else if (nums[traverse] == 2) {
            swap(nums[traverse], nums[high]);
            high--;
        }
        else {
            traverse++;
        }
    }
}