# K largest(or smallest) elements in an array | added Min Heap method
#### Difficulty Level : Medium

### Question: Write an efficient program for printing k largest elements in an array. Elements in array can be in any order.
*For example, if given array is [1, 23, 12, 9, 30, 2, 50] and you are asked for the largest 3 elements i.e., k = 3 then your program should print 50, 30, and 23.*

## Method 1 (Using Bubble K Times)
    1) Modify Bubble Sort to run the outer loop at most k times.
    2) Print the last k elements of the array obtained in step 1.
    Time Complexity: O(n*k)
