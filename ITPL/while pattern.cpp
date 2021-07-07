#include<stdio.h>
main()
{
	int i,j,a=0;
	printf("enter the value of i:");
	scanf("%d",&i);
	
	while(a<=i)
	{
		j=1;
		while(j<=a)
		{
		  printf("*");
		   j++;
	    }
	    printf("\n");
	   
	   i++;
	}
}
