//program to implement kadane's algorithm to find the largest sum of contiguous subarray
#include<iostream>
using namespace std;

int kadane(int array[],int size) {
    
   int max_so_far = 0;
   int max_ending_here = 0;
   
   for(int i = 0; i<size; i++){
      max_ending_here =max(array[i],max_ending_here + array[i]) ;
      max_so_far= max(max_so_far,max_ending_here);
   }
   return max_so_far;
}
int main() {
    
   int n=8;
   int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   cout << "The Maximum Sum is: "<<kadane(arr,n) << endl;
   return 0;
}
