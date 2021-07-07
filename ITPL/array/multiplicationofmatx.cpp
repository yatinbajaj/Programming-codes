#include<stdio.h>
 int main()
{	
	int arr1[10][10];
	int arr2[10][10];
	int sum[10][10];
	int i,j,k,row1,row2,col1,col2,mul;
	printf("name:yatin\t\nid:1810992625\n");
	
	printf("Enter the number of rows and col of matx1:\n");
	scanf("%d%d",&row1,&col1);
	printf("\nrows=%d\ncolums=%d\n",row1,col1);
	printf("Enter the number of rows and col of matx2:\n");
	scanf("%d%d",&row2,&col2);
	printf("\nrows=%d\ncolums=%d",row2,col2);
	
	if(col1==row2)
	{
		printf("\nEnter the number of elements of matx1:\n");
		for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
		
	}
	printf("\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
		printf("\n");

	printf("Enter the number of elements of matx2:\n");
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
    	
    	
    	for(j=0;j<col2;j++)
    	{
    		sum[i][j]=0;
    		for(k=0;k<row2;k++)
    		{
    			sum[i][j]=sum[i][j]+(arr1[i][k]*arr2[k][j]);
			}
		}
	}
	printf("\n multiplication of matrix:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col2;j++)
		{
			
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
	   printf("so,Entered no. of column of matrix1 is not equal to no. of rows of matrix 2");
	}
	return 0;
}
