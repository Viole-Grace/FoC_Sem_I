#include <stdio.h>
void main()
{
	int A[10][10],B[10][10],C[10][10];
	int m,n,p,q,i,j,k;
	printf("\nEnter order of first matrix : ");
	scanf("%d%d",&m,&n);
	printf("\nEnter order of second matrix : ");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		printf("Enter first matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("Enter second matrix\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for (j=0;j<q;j++)
			{
				C[i][j]=0;
				for(k=0;k<n;k++)
				{
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		printf("Matrix Product :\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrices arent compatible\n");
	}
}