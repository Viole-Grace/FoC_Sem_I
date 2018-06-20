#include <stdio.h>
#include <math.h>
void main()
{
	int i,j;
	int A[10][10];
	int m,n,trace=0,sum=0;
	float norm;
	printf("\nEnter the order : ");
	scanf("%d%d",m,n);
	if (m==n)
	{
		printf("\nEnter the matrix : \n");
		for (i=0;i<m;i++)	
		{
			for (j=0;i<n;i++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		for (i=0;i<m;i++)
		{
			trace=trace+A[i][i];
			for (j=0;j<n;j++)
			{
				sum=sum+A[i][j]*A[i][j];
			}
		}
		norm=sqrt((float)sum);
		printf("\nTrace : %d\nNorm  : %f\n",trace,norm);
	}
	else
	{
		printf("Cannot find trace\n");
	}
}