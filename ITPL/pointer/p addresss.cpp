#include<stdio.h>
int main()
{
	int *p,a=1;
	char *p1,var='a';
	float *p2,b=16.2;
	p=&a;
	p1=&var;
	p2=&b;
	
	printf("interger:%d\tvalue:%d",*p,p);
	printf("\nchar:%c\t\tvalue:%d",*p1,p1);
	printf("\nfloat:%f\tvalue:%d",*p2,p2);
	return 0;
}
