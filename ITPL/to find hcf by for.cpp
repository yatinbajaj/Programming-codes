#include<stdio.h>
main()
{
	int rem ,divident,divisor;
	printf("name:yatin bajaj\nroll no.:1810992625\n");
	printf("\nenter the value of divident and divisor:");
	scanf("%d%d",&divident,& divisor);
	
	rem=divident%divisor;
	for(rem!=0;divisor=divident;divisor=rem)
	printf("hcf:%d",rem);
	
	
}
