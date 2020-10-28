def move_common_leftside(arr):
    if len(arr) < 1:
        print ("lngth issues")
    R = len (arr) - 1
    W = len (arr) - 1

    while(R >= 0):
        if(arr[R]!=0):
            arr[W] = arr[R]
            W -= 1
        R -= 1    

    while(W >= 0):
        arr[W] = 0
        W -= 1

    print("Moved Array: ", arr)

arr = [ 0, 2, 5, 0, 11, 0, 6, 8, 0, 15 ]

print ("original array: ", arr)

move_common_leftside(arr)