#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,n,i=0,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("memory not available");
		exit(0);
	}
	printf("enter elements:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("sum:%d",sum);
	free(ptr);
	
	return 0;
}
