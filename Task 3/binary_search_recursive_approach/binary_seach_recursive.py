# SAMPLE INPUT: 256
# SAMPLE OUTPUT: 256 found at index:  8

def binary_search_helper(arr, value, L, R):
    mid = L + (( R - L ) // 2)
    if L > R:
        return "Not Found"
    if arr[mid] == value:
        return mid
    elif value < arr[mid]:
        return binary_search_helper(arr, value, L, mid-1)
    else:
        return binary_search_helper(arr, value, mid+1, R)
    
arr = [ 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ]
value = 256

def binary_search(arr, value ):
    
    return binary_search_helper(arr, value, 0, len(arr)-1)

print(value, "found at index: ", binary_search(arr, value))