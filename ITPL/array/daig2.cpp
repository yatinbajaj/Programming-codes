#include<stdio.h>
int main()
{
	int arr[5][5],i,j,row1,col1;
	int n,sum=0,sum1=0;
	
	printf("enter the number of rows and col of matx1:\n");
	scanf("%d%d",&row1,&col1);
	printf("\nrows=%d\n",row1);
	printf("colums=%d\n",col1);
	
	printf("\nenter the elements of array:\n");
	
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	  for(i=0;i<row1;i++)
	  {
		
		for(j=0;j<col1;j++)
		{
			if(i==j)
			{
			  sum=sum+arr[i][j];
			}
			else
			{
			   sum1=sum1+arr[i][j];
			}
			
			
			
		}
	 }
    printf("sum of diag:%d",sum);
    printf("\nsum of non diag:%d",sum1);
	printf("\n");
	return 0;
	
}
