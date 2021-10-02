#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter no. of rows : ");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
      for(int j=1;j<=i;j++)  
      {  
         if(j==1 || j==i || i==n)  
          printf("*");  
          else  
          printf(" ");  
      }  
      printf("\n");  
    }  
    return 0;  
}  