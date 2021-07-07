#include<stdio.h>
int add(int a,int b);
int main()
{
	int sum,a,b;
	printf("enter the numbers:");
	scanf("%d%d",&a,&b);
	sum=add( a, b);
	printf("\nsum of two number:%d",sum);
	return 0; 
}
int add(int x,int y)
{
	int sum;
	sum=x+y;
	return sum;
}
