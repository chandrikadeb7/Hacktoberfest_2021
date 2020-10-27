#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element you want to store: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter array values:\n";
    //taking the array value 
    //from user
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //Now we will sort the array
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            //checking if previous value is
            //grater than next one or not
            if(arr[j]>arr[j+1])
            {
                //temp will temporarly store
                //the value of arr[j]
                //then we will swap the values
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After Bubble sort the array is:\n";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
