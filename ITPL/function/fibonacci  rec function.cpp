#include<stdio.h>
int fibonacci(int i);
int main()
{
	int i=0,n,res;
	printf("enter the number of terms:");
	scanf("\n%d",&n);
	printf("fibonacci series:\n");
	for(i=0;i<n;i++)
	{
	 	res=fibonacci(i);
	    printf("%d\t",res);
		
	}
	return 0;

}
int fibonacci(int x)
{
	int r;
	if(x==0)
	{
		r=0;
		return r;
	}
	else 
	if(x==1)
	{
		r=1;
		return r;
	}
	else
	{
		r=fibonacci(x-1)+fibonacci(x-2);
		return r;
	}
}
