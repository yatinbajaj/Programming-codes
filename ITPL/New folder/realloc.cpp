#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,i=0,*ptr,n2;
	printf("enter number of elements:");
	scanf("%d",&n1);
	
	ptr=(int*)malloc(n1*sizeof(int));
	
	printf("previously allocated address are:\n");
	for(i=0;i<n1;i++)
	{
		printf("%u",ptr+i);
		printf("\n");
	}
	printf("\nenter new size of elements:");
	scanf("%d",&n2);
	
	ptr=(int*)realloc(ptr,n2*sizeof(int));
	
	printf("newly allocated memory:\n");
	for(i=0;i<n2;i++)
	{
		printf("%u",ptr+i);
		printf("\n");
	}
	return 0;
}
