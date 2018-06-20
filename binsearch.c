#include <stdio.h>
int n,flag=1;
int key;
int arr[20];
int binsearch(int high,int low,int key, int arr)
{
	int mid = (low+high)/2;
	if(key==arr[mid])
	{
		printf("Key found at position : %d",mid+1);
		return 0;
	}
	else if(key<arr[mid])	
		return binsearch(mid-1,0,key,arr);
	else if(key>arr[mid])
		return binsearch(high,mid-1,key,arr);
}
void input()
{
	int i,j,temp;
	printf("\nEnter no. of elements in the array : ")
	scanf("%d",&n);
	printf("\nEnter the elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	printf("\nEnter the key to be searched : ")
	scanf("%d",&key);
	flag=binsearch(n,0,key,arr);
	if(flag!=0)
		printf("\nKey not found in array\n");
}
int main()
{
	input();
}