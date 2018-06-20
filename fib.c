#include <stdio.h>
int fib(int n)
{
	if(n==1 || n==0)
	{
		printf(" 0 ");
		return 0;
	}
	else if( n==2 || n==3 )
	{
		printf(" 1");
		return 1;
	}
	else
	{
		printf(" %d",fib(n-1)+fib(n-2));
	}
}
void main()
{
	int f=0,s=1,t;
	int n,i=0;
	printf("Enter the number of terms to be printed\n");
	scanf("%d",&n);
	if(n>0)
		fib(n);	
}