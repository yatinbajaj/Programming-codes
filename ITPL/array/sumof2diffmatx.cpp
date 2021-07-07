#include<stdio.h>
 int main()
{
	int arr1[5][5];
	int arr2[5][5];
	int sum[5][5];
	int sub[5][5];
	int i,j,row1,row2,col1,col2;
	printf("name:yatin\nidno.:1810992625\n");
	
	printf("enter the number of rows and col of matx1:\n");
	scanf("%d%d",&row1,&col1);
	printf("\nrows=%d\n",row1);
	printf("colums=%d\n",col1);
	printf("\nenter the number of rows and col of matx2:\n");
	scanf("%d%d",&row2,&col2);
	printf("\nrows=%d",row2);
	printf("\ncolums=%d\n",col2);
	
	if(row1==row2&&col1==col2)
	{
		printf("enter the number of elements of matx1:\n");
		for(i=0;i<row1;i++)
	 {
		for(j=0;j<col1;j++)                                         
		{                                                      //reading of an array
			scanf("%d",&arr1[i][j]);
		}
		
	 }
	printf("\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",arr1[i][j]);                       //printing of an array
		}
		printf("\n");
		
	}
	printf("\n");

	printf("enter the number of elements of matx2:\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
		 printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
			sub[i][j]=arr1[i][j]-arr2[i][j];
		}
	}

	printf("sum of matrix:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",sum[i][j]);
			
		}
		printf("\n");
	}
	printf("\nsub of matrix:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",sub[i][j]);
			
		}
		printf("\n");
	}
	
	
	}
		else
	{
		printf("\nenter matrix are not of same order");
	}
	
	return 0;
	
}
