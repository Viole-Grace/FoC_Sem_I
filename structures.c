#include <stdio.h>
struct Student
{
	char name[20];
	int rollno;
	int marks[3];
	int totalmarks;
};
void main()
{
	int i,j,n;
	struct Student S[40];
	printf("enter number of students\n");
	scanf("%d",n);
	for (i=0;i<n;i++)
	{
		printf("\nEnter the details of the student %d\n",i+1);
		printf("Enter name of student\n");
		scanf("%s",S[i].name);
		printf("Enter rollno of student\n");
		scanf("%d",&S[i].rollno);
		printf("Enter marks of 3 subjects\n");
		for(j=0;j<3;j++)
		{
			scanf("%d",&S[i].marks[j]);
		}
		S[i].totalmarks=0;
		for(j=0;j<3;j++)
		{
			S[i].totalmarks+=S[i].marks[j];
		}
		printf("total marks for student is %d\n\n",S[i].totalmarks);
	}
}