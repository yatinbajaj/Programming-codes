#include<stdio.h>
int main()
{
	int arr[50][50],i=0,j=0,row,col;
	printf("enter the number of rows:");
	scanf("%d",&row);
	printf("\nenter the number of col:");
	scanf("%d",&col);
	printf("row:%d",row);
	printf("\ncol:%d",col);
	
	printf("\nenter the array elements:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nentered array is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose of matrix is:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
	
}
