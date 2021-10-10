// Given an array of integers, find the longest subarray where the absolute difference between any two elements is less than or equal to .

#include <bits/stdc++.h>

using namespace std;

int N;
int A[1000];

int main()
{
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        int a;
        scanf("%d", &a);
        A[a]++;
    }
    int ans=0;
    for(int i=1; i<1000; i++)
        ans=max(ans, A[i-1]+A[i]);
    printf("%d\n", ans);
    return 0;
}
