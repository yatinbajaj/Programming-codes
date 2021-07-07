#include<stdio.h>
int main()
{
	int *p,b;
	char *p1,b1;
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of b1:");
	scanf("%c",&b1);
	p=&b;
	p1=&b1;
	
	printf("size of int:%x",sizeof(p));
	printf("size of char:%x",sizeof(p1));
}
