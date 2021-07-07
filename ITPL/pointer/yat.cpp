#include<stdio.h>
int main()
{
	int *p[3];
	int a=3,b=4,c=5;
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	printf("at p[0]:%d\taddress:%u",*p[0],p[0]);
	printf("\nat p[1]:%d\taddress:%u",*p[1],p[1]);
	printf("\nat p[2]:%d\taddress:%u",*p[2],p[2]);
}
