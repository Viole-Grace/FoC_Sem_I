#include <stdio.h>
void main()
{
	int arr[20][20],b[20][20],c[20][20];
	int m,n;
	int i,j;
	printf("Enter no. of elements of matrix 1 : N x N format ");
	scanf("%d",&n);
	printf("Enter no. of elements of matrix 2 : N x N format ");
	scanf("%d",&m);
	if(m!=n)
	{
		printf("Invalid matrix order : order of matrix doesnt match\n");

	}
	else
	{
		printf("Enter first matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter 2nd matrix \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("Matrix addition : \n")
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
					c[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
					printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
}