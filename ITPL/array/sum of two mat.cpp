#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j,c;
	printf("enter array element:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n matrix a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nsum of matrix(a+a):\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c=arr[i][j]+arr[i][j];
			printf("%d\t",c);
		}
		printf("\n");
	}
	
	return 0;
}
