#include<stdio.h>
   int main ()
{
	int num,i,product=1;
	printf("enter the value  of num:");
	scanf("%d",&num);
	i=num;
	while(i>0)
	{
		product=product*num;
		num--;
	}
	printf("\nfactorial:%d\n",product);
return 0;
}
