#include <stdio.h>

// Function to move all zeros present in the array to the end
void reorder(int A[], int n)
{
	// k stores index of next available position
	int k = 0;

	// do for each element
	for (int i = 0; i < n; i++)
	{
		// if current element is non-zero, put the element at
		// next free position in the array
		if (A[i] != 0)
			A[k++] = A[i];
	}

	// move all 0's to the end of the array (remaining indices)
	for (int i = k; i < n; i++)
		A[i] = 0;
}

// Move all zeros present in the array to the end
int main(void)
{
	int A[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
	int n = sizeof(A) / sizeof(A[0]);

	reorder(A, n);

	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);

	return 0;
}