#include <stdio.h>
#include <string.h>
void main()
{
	char s1[20],s2[20];
	int i,j;
	printf("\nEnter the two strings : ");
	scanf("%s%s",s1,s2);
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++)
		s1[i+j]=s2[j];
	s1[i+j]='\0';
	printf("\nThe concatenated string is %s",s1);
}