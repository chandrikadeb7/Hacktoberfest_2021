
// Write a program that, given an array A[] of n numbers and another number x, determines whether or not there exist two elements in A[] whose sum is exactly x.

#include <iostream>
uing namespace std;

// sort the array before passing to the function(use whatever algo fits your case)

bool check_pair(int *arr,int x){

	int left = 0;
	int right = sizeof(arr) - 1;

	while(l<r){

		if(arr[left] + arr[right] == x){
			return true;
		}

		else if(arr[left] + arr[right] < x){

			left++;

		}

		else{
			right--;
		}

	}

	

}


int main(){

	<int> arr[5] = {1,2,3,4,5};
	int x = 3;

	return 0;
}


//  to implement this algo we have 2 choices
//  1. do it brootforcely in O(n) by 2 forloops
//  2. or we sort the array depending the most effeicent sorting algo fit for the conditions

// implementing 2nd algo

// first we sort the array then we make 2 pointers on in left = 0 and other right = size of arr -1
// then we check if arr[left] + arr[right]==x if yes we return true 
//  else if the sum is < x so we incriment left pointer 
//  else we decrement right pointer because the x < sum

//  time complexity
//  depends on the sorting algo used
// check pair -> O(n)
// quick sort + check pair -> O(n^2)
// merge sort or heap sort + check pair-> o(nlogn)


