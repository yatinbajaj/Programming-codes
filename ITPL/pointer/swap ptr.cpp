#include<stdio.h>
int main()
{
	int a,b,*p1,*p2,temp;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("a:%d b:%d",a,b);
	p1=&a;
	p2=&b;
	temp=*p1;                     //swaping
	*p1=*p2;
	*p2=temp;
	
	printf("\nnumber after swap a:%d b:%d",a,b);
	
	
	
}
