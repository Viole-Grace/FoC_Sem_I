#include <stdio.h>
void main()
{
	int ch;
	float l,b,h;
	float w;
	float a,r,area,flag=1;
	printf("Enter the polygon :\n1. Triangle \n2. Square \n3. Circle \n4. Rectangle\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter base and height\n");
				scanf("%f%f",&b,&h);
				area=0.5*b*h;
				break;
		case 2: printf("Enter the side\n");
				scanf("%f",&a);
				area=a*a;
				break;
		case 3: printf("Enter the radius\n");
				scanf("%f",&r);
				area=3.1415*r*r;
				break;
		case 4: printf("Enter the length and breadth\n");
				scanf("%f%f",&l,&w);
				area=l*w;
				break;
		default: printf("Invalid choice\n");
				 flag=0;
	}
	if(flag)
	{
		printf("area of the selected polygon=%f\n",area);
	}
}