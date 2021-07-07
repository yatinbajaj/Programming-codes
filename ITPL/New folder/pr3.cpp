#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,*ptr,i=0,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory nt available");
		
	}
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("sum:%d",sum);
	sum=0;
	printf("enter n again to realloc:");
	scanf("%d",&n);
	ptr=(int*)realloc(ptr,n*sizeof(int));
		if(ptr==NULL)
	{
		printf("memory nt available");
		
	}
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum=sum+*(ptr+i);
	}
	printf("sum:%d",sum);
	
	free(ptr);
	return 0;
	
	
}
