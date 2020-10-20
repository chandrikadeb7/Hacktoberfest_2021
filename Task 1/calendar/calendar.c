#include <stdio.h>

int main()
{
    int days,start,i,j; 
    printf("Enter number of days");
    scanf("%d",&days);
    printf("Enter starting day(1=Sunday,7=Saturday");
    scanf("%d",&start);
    for (i=1;i<start;i++)
    {
        printf("\t");
    }

    i=start-1;
    j=1;
    while (j<=days)
    {
        while (i<7 && j<=days)
        {
            printf("%d\t",j);
            i=i+1;
            j=j+1;

        }
        printf("\n");
        i=0;

    }

}