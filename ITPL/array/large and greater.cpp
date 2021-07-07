#include<stdio.h>
int main()
{
	int arr[100],large,small,i,n,small2;
	printf("name:yatin\t\nid:1810992625\n");
	printf("how many elements you want:");
	scanf("%d",&n);
	
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		
	    scanf("%d",&arr[i]);
	}
	
	large=small=arr[0];
	
	for(i=0;i<n;i++)
	{
		if (arr[i]>large)
		{
		   large=arr[i];
		}
	
		if(arr[i]<small)
		{
			small=arr[i];
		}
	
	}
		printf("largest:%d\n",large);
		printf("smallest:%d\n",small);
	
	
}
