#include<string.h>
#include<stdio.h>
int main()
{
	union student
	{
		char name[20];
		int roll;
	};
	union student stud1;
	printf("enter the name:");
	gets(stud1.name);
	printf("\nenter the roll number:");
	scanf("%d",&stud1.roll);
	printf("size of union:%d",sizeof(stud1));
	
	printf("\n%s\t%d",stud1.name,stud1.roll);
	
}
