#include<stdio.h>
   int main ()
{
	unsigned int num,i,product=1;
	printf("\nName:yatin\nRollno.1810992625\nDate:12-02-19");
	printf("\nenter the value  of num:");
	scanf("\n%d",&num);
		for(i=num;i>=1;i--)
	{
		product=product*i;
		
	}
	printf("\nfactorial of number:%d\n",product);
	
	return 0;
}
