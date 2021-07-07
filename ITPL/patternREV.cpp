#include<stdio.h>
main()
{
	int rows,columns,spaces,astrix;
	printf("name:yatin\nroll no.:1810992625\ndate:21-01-19\n");
	
	for( rows=1;rows<=5;rows++)
	{
		for(spaces=5;spaces>=rows;spaces--)
		{
			printf(" ");
		}
		for(columns=1;columns<=rows;columns++)
		{
			printf("*");
		}
		printf("\n");
	}
}
