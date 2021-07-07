#include<stdio.h>
int main()
{
	int a=0,b=1,temp,num,count=2;
	printf("enter the number num:");
	scanf("%d",&num);
	while(count<=num)
	{
		temp=a+b;
		a=b;
		b=temp;
		printf("%d",temp);
		count++;
	}
}
