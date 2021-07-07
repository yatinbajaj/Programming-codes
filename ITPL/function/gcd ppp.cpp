#include<stdio.h>
int gcd(int,int);
int main()
{
	int n1,n2;
	int res;
	printf("enter the numbers:");
	scanf("%d%d",&n1,&n2);
	res=gcd(n1,n2);
	printf("gcd:%d",res);
	
	return 0;
	
}
int gcd(int n1, int n2)
{
	
	
		if(n1>n2)
		{
			n1=n1-n2;
			gcd(n1,n2);
		}
		else
		if(n2>n1)
		{
			n2=n2-n1;
			gcd(n1,n2);
		}
		else if(n1==n2)
		{
			return n1;
		}
	

}
