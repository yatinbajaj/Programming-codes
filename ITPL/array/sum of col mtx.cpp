#include<stdio.h>
int main()
{
	int arr[5][5],i,j,n,row1,col1,sum,sum1;
	printf("name:yatin\t\nid:1810992625\n");
	printf("enter the number of rows and col of matx1:\n");
	scanf("%d%d",&row1,&col1);
	printf("\nrows=%d\n",row1);
	printf("colums=%d\n",col1);
	
	printf("\nenter the elements of matrix:\n");
	for(i=0;i<row1;i++)
	 {
		for(j=0;j<col1;j++)                                         
		{                                                      //reading of an array
			scanf("%d",&arr[i][j]);
		}
		
	 }
	printf("\matrix A is:\n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("%d\t",arr[i][j]);                       //printing of an array
		}
		printf("\n");
		
	}
	printf("\n");
	for(i=0;i<row1;i++)
	{
		sum=0;
		sum1=0;
		for(j=0;j<col1;j++)
		{
			sum+=arr[j][i];
			sum1+=arr[i][j];
		}
		printf("sum of col %d:%d",i+1,sum);
		printf("\n");
		printf("sum of row %d:%d",i+1,sum1);
		printf("\n");
	}
}
