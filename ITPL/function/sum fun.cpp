#include<stdio.h>
int sum(int arr[],int n);            //function declaration or prototype
int main()
{
	int arr[100],i=0,n,sum1=0;
printf("name:rudrish rana\nid no.:1810992609\n");
	printf("enter how many elements :");
	scanf("%d",&n);
	printf("\nenter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum1=sum(arr,n);                //function calling
	printf("sum of given array elements:%d",sum1);
	return 0;
	
}
int sum(int arr[],int n)           //function defination
{
	int sum=0,i=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}

	return sum;
}
