#include<stdio.h>
main()
{
	int n=1,i,j,k=1;
	printf("enter the value of i:");
	scanf("%d",&i);
	
	while(n<=i)
	{
		j=1;
		while(j>n)
		{
			
			printf("%d",n);
			j++;
			
		}
		printf("\n");
		n++;
	}
	
}
