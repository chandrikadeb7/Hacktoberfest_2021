// function to swap values of the array.
function swap(arr, i, j){
    var temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
 }

//  After calculating the pivot, we send the pivot to the partition function. 
// In the partition function we pass array, pivot index, left and right.
function partition(arr, pivot, left, right){
    var pivotValue = arr[pivot],
        partitionIndex = left;
 
    for(var i = left; i < right; i++){
     if(arr[i] < pivotValue){
       swap(arr, i, partitionIndex);
       partitionIndex++;
     }
   }
   swap(arr, right, partitionIndex);
   return partitionIndex;
 }

function quickSort(arr, left, right){
    var len = arr.length, 
    pivot,
    partitionIndex;
 
 
   if(left < right){
     pivot = right;
     partitionIndex = partition(arr, pivot, left, right);
     
    //sort left and right
    quickSort(arr, left, partitionIndex - 1);
    quickSort(arr, partitionIndex + 1, right);
   }
   return arr;
 }


// Input: [11,8,14,3,6,2,7] 0 6
console.log(quickSort([11,8,14,3,6,2,7],0,6));

// Output: 
// [2, 3, 6, 7, 8, 11, 14]

// Input: [11,8,14,3,6,2,1, 7] 0 7
console.log(quickSort([11,8,14,3,6,2,1, 7],0,7));

// Output:
//[1, 2, 3, 6, 7, 8, 11, 14]