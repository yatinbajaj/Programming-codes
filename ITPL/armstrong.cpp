#include<stdio.h>
#include<math.h>
  main()
{
	int num,sum=0,num1,c ,r;
	printf("enter the number num:");
	scanf("%d",&num);
	num1 =num;
	while(num>0)
	{
		r=num%10;
		c=pow(r,3);
		sum=sum+c;
		num=num/10;
	}
	printf("\nsum:%d",sum);
	
	if(sum==num1)
	{
		printf("\n no.enter is armstrong");
	}
	else
	{
		printf("\n no.enter is not armstrong");
	}
	return 0;
}
