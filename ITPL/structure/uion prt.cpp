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
	printf("\nname=%s",stud1.name);
	printf("enter the roll number:");
	scanf("%d",&stud1.roll);
	printf("roll=%d",stud1.roll);
	printf("\nsize of union:%d",sizeof(stud1));
	
	
	
}
