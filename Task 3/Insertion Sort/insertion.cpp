//  Implementation of Insertion sort algorithm in c++
//  sorting an array in ascending order using insertion sort

#include<stdio.h>
void Insertion(int arr[],int);
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    Insertion(arr,n);
    printf("Array in sorted order is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void Insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
