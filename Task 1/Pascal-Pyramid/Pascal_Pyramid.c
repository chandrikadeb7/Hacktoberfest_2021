#include<stdio.h>
void main()
{
	int n,i,j,a;
	printf("\n\n");
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a=1;
		for(j=1;j<=n-i;j++)
			printf(" ");
				for(j=0;j<=i;j++)
				{
					printf("%d ",a);
					a=a*(i-j)/(j+1);
				}
				printf("\n");
	}
}
