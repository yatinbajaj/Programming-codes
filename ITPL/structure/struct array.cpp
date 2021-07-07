#include<stdio.h>
#include<string.h>
int main()
{
	struct student
	{
		char name[20];
		int roll;
		char branch[20];
	};
	struct student stud[50];
	int i=0,n;
	printf("enter the number of student:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the name:");
		gets(stud[i].name);
		printf("\nenter the roll number:");
		scanf("%d",&stud[i].roll);
		printf("\nenter the branch:");
		gets(stud[i].branch);
	}
	for(i=0;i<n;i++)
	{
		printf("\n*******details of student%d********",i+1);
		printf("\nName=%s",stud[i].name);
		printf("\nRoll No.=%d",stud[i].roll);
		printf("\nBranch=%s",stud[i].branch);
	}
	return 0;
	
}
