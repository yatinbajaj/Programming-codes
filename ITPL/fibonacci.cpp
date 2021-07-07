#include<stdio.h>
int main()
{
	int a=0,b=1,temp,num,count=2;
	
	printf("\nenter the number num:");
	scanf("%d",&num);
	
	printf("%d\n%d\n",a,b);
	while(count<num)
	{
		temp=a+b;
		a=b;
		b=temp;
		printf("%d",temp);
		count++;
		printf("\n");
	}
	
	
}
