#include<stdio.h>
main()
{
	int i,sum=0,a[80],n;
	printf("how many element you want:\n");
	scanf("%d",&n);
	printf("populating the array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
//	for(i=0;i<n;i++)
	{
//		sum=sum+a[i];
	}
	printf("\nsum:%d",sum);
	return 0;
}
