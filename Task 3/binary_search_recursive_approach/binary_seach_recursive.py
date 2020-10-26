#_______________________________________________________________
# Binary_search using recursion.
# arr = [ 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ]
#        /                |                        \
#       L                mid                        R
# 
# mid = L + ((R-L) // 2)
# time complexity O(n)
# Author: Vivek Wesley
# _______________________________________________________________

def binary_search_helper(arr, value, L, R):
    mid = L + (( R - L ) // 2)
    if L > R:                                             # L-> Left, R-> Right
        return "Not Found"
    if arr[mid] == value:
        return mid
    elif value < arr[mid]:
        return binary_search_helper(arr, value, L, mid-1) # move R = mid-1 if the target value is < mid value.
    else:
        return binary_search_helper(arr, value, mid+1, R) # move L = mid+1 if the target value is > mid value.
    

arr = [ 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ]
value = 256

def binary_search(arr, value ): # driver function definition
    
    return binary_search_helper(arr, value, 0, len(arr)-1) #calling recursive function and passing required arguments [Note: L = 0 (first_index_value), R = len(arr)-1] 

print(value, "found at index: ", binary_search(arr, value)) # calling driver function

# sample input: 256
# sample output: 256 found at index:  8

# __________happy coding__________