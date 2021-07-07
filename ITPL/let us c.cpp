#include<stdio.h>
int main()
{
	int avg,sum=0,i;
	int marks[5];
	
	for(i=0;i<=4;i++)
	{
		printf("enter the marks:");
		scanf("%d",&marks[i]);
		
		sum=sum+marks[i];
		
	}
	avg=sum/5;
	printf("average marks=%d\n",avg);
	return 0;
}
