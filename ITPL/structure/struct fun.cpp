#include<stdio.h>

	struct student 
	{
		char name[25];
		int roll;
		int marks;
	};
	void display(student);
	int main()
	{
		
	  struct student b1={"kashish",1810992625,78};
	  display(b1);	
	  return 0;
	}
	display(struct student *b1)
	{
		printf("\n%s%d%d",b1->name,b1->roll,b1->marks);
	}
	
	
	
