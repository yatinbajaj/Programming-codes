#include<stdio.h>
int sum(int a,int b);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	int a,b,res,res1,res2, res3;
	printf("enter the value of a and b:");
	scanf("%d%d",&a,&b);
	res=sum(a,b);
	
	printf("sum=%d",res);
	res1=sub(a,b);
	printf("\nsub=%d",res1);
	res2=mul(a,b);
	printf("\nmul=%d",res2);
	res3=div(a,b);
	printf("\ndiv=%d",res3);
	
	return 0;
}
int sum(int a,int b)
{
	int sum1;
	sum1=a+b;
	return sum1;
}
int sub(int a, int b)
{
	int sub1;
	sub1=a-b;
	return sub1;
}
int mul(int a,int b)
{
	int mul1;
	mul1=a*b;
	return mul1;
	
}
int div(int a,int b)
{
	int div1;
	div1=a/b;
	return div1;
}
