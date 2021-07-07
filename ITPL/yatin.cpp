#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,sum=0;
	printf("enter array element:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("\nsum of array elements:%d",sum);
	return 0;
}
