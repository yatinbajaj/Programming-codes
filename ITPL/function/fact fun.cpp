#include<stdio.h>
 unsigned int fact( int num);
int main()
{
	unsigned int num,res=0;
	printf("enter the number :");
	scanf("%d",&num);
	res=fact( num);
	printf("factorial:%lu",res);
	
return 0;
}
 unsigned int fact( int x)
{
	 int r;
	if(x==0||x==1)
	{
		r=1;
		
	}
	else
	{
		r=x*fact(x-1);
		
	}
	return r;
}
