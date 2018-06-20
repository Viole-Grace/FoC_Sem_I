#include <stdio.h>
#include <string.h>
void main()
{
	char str[20];
	int i,j,len,flag=1;
	printf("\nEnter the string\n");
	scanf("%s",str);
	for(len=0;str[len]!='\0';len++);
	for(i=0,j=len-1;i<len/2;i++,j--)
	{
		if (str[i]!=str[j])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nPalindrome\n");
	}
	else
	{
		printf("\nString is not a palindrome\n");
	}
}