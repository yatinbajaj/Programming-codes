#include<stdio.h>
main()
{
	int r[80],i=0,j=0,num;
	printf("enter the value of num:");
	scanf("%d",&num);
	
	while(num>0)
	{
		r[i]=num%16;
		num=num/16;
		i++;
	}
	printf("hex:");
	for(j=i-1;j>=0;j--)
	{
		if(r[j]>=10)
		{
			printf("%c",r[j]+55);
		}
		else
		{
			printf("%d",r[j]);
		}
		
	}
}
