#include <stdio.h>
void main()
{
	int l=0,*cp;
	char name[20];
	printf("\nEnter string\n");
	scanf("%s",name);
	cp=name;
	while(*cp!='\0')
	{
		l++;
		cp++;
	}
	printf("\nString Length : %d\n",l);
}