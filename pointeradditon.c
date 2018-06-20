#include <stdio.h>
void main()
{
	int a[20],i,n,*p,sum=0;
	p=a;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("Sum : %d\n",sum);
}