#include<stdio.h>
int main()
{
	int arr[5][5],i,j,row1,col1;
	int arr1[5][5];
	int n,sum=0;
	
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
			if(i==j)
			{
				arr[i][j]=0;
			}
			else if(i<j)
			{
				arr[i][j]=1;
			}
			if(i>j)
			{
				arr[i][j]=-1;
			}
			
		}
	}
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				arr1[i][j]=arr[i][j];
				printf("%d\t",arr1[i][j]);
			}
			printf("\n");
		}
	}

