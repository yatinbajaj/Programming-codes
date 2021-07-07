#include<stdio.h>
main()
{
	int r[80],i=0,j=0,num;
	printf("enter the value of num:");
	scanf("%d",&num);
	
	while(num>0)
	{
		r[i]=num%8;
		num=num/8;
		i++;
	}
	{
		printf("binary equivalent:");
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",r[j]);
	}
}
