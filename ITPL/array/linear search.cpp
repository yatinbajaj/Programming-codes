#include<stdio.h>
int main()
{
	int arr[100],pois,i,n,found=1,num;
	printf("name:yatin\nidno.:1810992625\n");
	
	printf("how many elements you want:");
	scanf("%d",&n);
	
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		
	    scanf("%d",&arr[i]);
	}
	printf("enter element you want to search:");
	scanf("%d",&num);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			found=0;
			pois=i;
			printf("\n%d is found in the array at poistion=%d",num,i);
			break;
		}
	}
		if(found==1)
		{
			printf("num=%d not found",num);
			
		}
	
}
