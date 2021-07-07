#include<string.h>
#include<stdio.h>
int gcd(int n1,int n2);
int main()
{
	int n1,n2,res;
	printf("enter the number n1,n2:");
	scanf("%d%d",&n1,&n2);
	res=gcd(n1,n2);
	printf("gcd:%d",res);
	
	return 0;
	
}
int gcd(int n1,int n2)
{
	int  rem;
	rem=n1%n2;
	if(rem==0)
	{
		return n2;
	}
	else
	{
		return gcd(n2,rem);
}
}
