#include<stdio.h>
int main()
{
	int t[5][5],i,j,row1,row2,col1,col2,n;
	printf("enter the number of rows and col of matx1:\n");
	scanf("%d%d",&row1,&col1);
	printf("\nrows=%d\n",row1);
	printf("colums=%d\n",col1);
	printf("\nenter the array elements:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&t[i][j]);
		}
	}
	printf("\nmatrix A is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	row2=col1;
	col2=row1;
	printf("\ntranspose of matrix A is:\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("%d\t",t[j][i]);
		}
		printf("\n");
	}
	
	
}
