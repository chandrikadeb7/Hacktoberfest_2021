#include<iostream>
using namespace std;
int removeDuplicates(int num[] )
{
  int n=sizeof(num)/sizeof(num[0]);
	if (n==0 || n==1){
		return n;
  }
	int j = 0;
	for (int i=0; i < n-1; i++){
		if (num[i] != num[i+1]){
			num[j++] = num[i];
      }
  }
	num[j++] = num[n-1];

	return j;
}

