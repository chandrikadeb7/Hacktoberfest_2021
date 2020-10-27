# [Q] Serach element using binary search using recursion

---

arr = [ 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 ]

```python

    mid = L + ((R-L) // 2)

```

# EXPLANATION:

1. point L and R first and last indexes of the array respectively

1. calculate mid point

```python
    mid = L + (( R - L ) // 2)
```

1. compare arr[mid] with target value

```python
    if arr[mid] == value:
        return mid
```

1. if arr[mid]> target value
   set R = mid-1

1. else
   set L = mid+1

1. L > R
   return element not found

time complexity O(n)

# INPUT:

256

# OUTPUT:

256 found at index: 8
