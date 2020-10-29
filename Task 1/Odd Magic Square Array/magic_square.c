#include <stdio.h>

int main()
{
    int n,l,b=0,tl,tb;

    printf("Enter odd integer: ");
    scanf("%d",&n);
    int i,j;

    int ar[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            ar[i][j]=0;
        }
        
    }


    l=n/2;
    i=1;

    for (i=1;i<=(n*n);i++)
    {
        ar[b][l]=i;
        //tb=(b-1)%n;
        tb=(b+n-1)%n;
        tl=(l+1)%n;
        if (ar[tb][tl]!=0)
            b=(b+1)%n;
        else
        {
            b=tb;
            l=tl;
        }

        

        
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
    

}
