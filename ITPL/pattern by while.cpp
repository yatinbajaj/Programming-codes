#include<stdio.h>
main()
{
	int i=1,j=1;
	printf("enter the value of i:");
	scanf("%d",&i);
	
	while(i<=5)
	{
		while(j<=i)
		{
		
		 printf("*");
		 j++;
	    }
	    printf("\n");
	   
	   i++;
	}
}
