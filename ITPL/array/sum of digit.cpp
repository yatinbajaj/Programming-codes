#include<stdio.h>
main()
{
	int sum=0,num,r;
	printf("Name:yatin\nRoll no.1810992625\ndate:11-01-19");
	printf("\nenter the number num:");
	scanf("%d",&num);
	
	while(num>0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	
		
	}
	printf("sum of digit :%d",sum);
}
