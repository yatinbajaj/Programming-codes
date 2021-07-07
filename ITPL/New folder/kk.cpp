#include<stdio.h>
int main()
{
	int arr[2][2],i,j,row1,col1,n,determinant;
	printf("enter the number of rows and col of matx1:\n");
	scanf("%d%d",&row1,&col1);
	printf("\nrows=%d\n",row1);
	printf("colums=%d\n",col1);
	printf("\nenter the array elements:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nmatrix A is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
      determinant=arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
	  	printf("\ndeterminant=%d",determinant);
	return 0;
	
}
