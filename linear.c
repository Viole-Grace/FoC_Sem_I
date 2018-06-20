#include <stdio.h>
int linear(int n,int key,int arr)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
			return i+1;
	}
	return 0;
}
void main()
{
	int n,i,key;
	int arr[100];
	printf("\nEnter no. of elements : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nEnter the key to be searched in the array : ");
	scanf("%d",&key);
	if(linear(n,key,arr)==0)
		printf("\nElement not found in array");
	else
		printf("Element found at position : %d",linear(n,key,arr));
}