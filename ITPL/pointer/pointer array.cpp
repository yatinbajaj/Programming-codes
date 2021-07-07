#include<stdio.h>
int main()
{
	int arr[100];
	int *pa,i=0,n;
	pa=&arr[0];
	printf("how many elements to enter:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",pa+i);
	}
	printf("\nenter array elements and address are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%d\n",(pa+i),*(pa+i));
	}
	return 0;
}
