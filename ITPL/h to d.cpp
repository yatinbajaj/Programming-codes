#include<stdio.h>
main()
{
	int r[80],i=0,j=0,num;
	printf("enter the value of num:");
	scanf("%x",&num);
	
	while(num>0)
	{
		r[i]=num%10;
		num=num/10;
		i++;
	}
	printf("decimal equivalent:");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",r[j]);
	}
}
