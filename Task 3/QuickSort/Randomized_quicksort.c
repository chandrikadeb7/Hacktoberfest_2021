#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rand_shuffle(int arr[],int n)
{
    srand(time(NULL));
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        j = rand()%(i + 1);
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
 
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partion(int arr[], int p, int r)
{
    int pivotIndex = p + rand()%(r - p + 1); 
    int pivot;
    int i = p - 1;
    int j;
    pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[r]);
    for (j = p; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
 
    }
    swap(&arr[i+1], &arr[r]);
    return i + 1;
}
 
void quick_sort(int arr[], int p, int q)
{
    int j;
    if (p < q)
    {
        j = partion(arr, p, q);
        quick_sort(arr, p, j-1);
        quick_sort(arr, j+1, q);
    }
}
int main()
{
    int i;
    int n;
    printf("enter the size of array!!\n");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
        		
	double start_t,total_t,end_t;
	start_t=clock();
    rand_shuffle(arr,n); //To randomize the array
    quick_sort(arr, 0, n-1); //function to sort the elements of array
    end_t = clock();
    total_t = (double)(end_t - start_t);
   
    for (i = 0; i < n; i++)
         printf("%d  ", arr[i]);
         
         printf("\nTotal time taken by CPU: %f\n", total_t  );
    return 0;
}
