#include<stdio.h>
int main()
{
	int a,*p;
	printf("enter the value of a:");
	scanf("%d",&a);
	p = &a;
	printf("%d",*p);//value of a
	printf("\n%u",&p);//memory address of p
	printf("\n%u",p);//memory address of a
	printf("\n%d",a);//value of a
	printf("\n%x",&a);//memory address ofa
	
	return 0;
}
