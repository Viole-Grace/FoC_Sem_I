#include <stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,m6,per;
	printf("\nEnter 6 subject marks : ");
	scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
	if (m1<40 || m2<40 || m3<40 || m4<40 || m5<40 || m6<40)
	{
		printf("Student has failed\n");
	}
	else
	{
		per=(m1+m2+m3+m4+m5+m6)/6;
		if (per>=90)
		{
			printf(" Grade : S+ \n");
		}
		else if (per>=80)
		{
			printf("Grade : S \n");
		}
		else if (per>=70)
		{
			printf("GRade : A \n");
		}
		else if (per>=60)
		{
			printf("GRade : B \n");
		}
		else if (per>=50)
		{
			printf("Grade : C \n");
		}
		else if (per>=45)
		{
			printf("Grade : D\n");
		}
		else if (per>=40)
		{
			printf("Grade : E\n");
		}
	}
}