#include <stdio.h>
void main()
{
	int a,b,*p,*q,t;
	p=&a;
	q=&b;
	printf("Enter the two numbers : \n");
	scanf("%d%d",p,q);
	t=*p;
	*p=*q;
	*q=t;
	printf("Numbers after swapping : \n");
	printf("a=%d\tb=%d\n",*p,*q);
}