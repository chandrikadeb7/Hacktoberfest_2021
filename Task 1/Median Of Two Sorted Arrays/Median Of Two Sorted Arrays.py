class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        arr = sorted(nums1+nums2)
        
        if len(arr)%2 == 1:
            out = float(arr[int(len(arr)/2)])
        else:
            out = float((arr[int(len(arr)/2)]+arr[int(len(arr)/2-1)]))/2

        return out