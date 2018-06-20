#include <stdio.h>
void selort(int arr[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
int main()
{
	int arr[100];
	int i,j,n;
	printf("\nEnter size of array : ");
	scanf("%d",&n);
	printf("\nEnter the array :\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	selort(arr,n);
	printf("Sorted Array :\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}