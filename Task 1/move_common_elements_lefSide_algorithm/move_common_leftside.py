# def move_common_leftside(arr):
#     if len(arr) < 1:
#         return "length issues"
#     read_stream = len(arr) - 1
#     write_stream = len(arr) - 1

#     while(read_stream >= 0):
#         if arr[read_stream] != 0:
#             arr[write_stream] = arr[read_stream]
#             write_stream -= 1

#         read_stream -= 1
    
#     while(write_stream >= 0):
#         arr[write_stream] = 0
#         write_stream -= 1
    
#     print("0 shifted left : ", arr)

# arr = [ 5, 6, 10, 0, 60, 0, 0, 90, 0 ]

# print("Original array: ", arr)
# move_common_leftside(arr)


# Algorithm:
# Move common elements of the array to left side
# We are moving '0' to <--left which occurs 4 times in the given example.
# though we are moving '0' without changing the the order of the array.

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
