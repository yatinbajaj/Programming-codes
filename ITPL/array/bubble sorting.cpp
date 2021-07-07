#include<stdio.h>
int main()
{
	int a[100],i,n,min,j,temp;
	printf("name:yatin\t\nid:1810992625\n");
	printf("how many elements you want:");
	scanf("%d",&n);
	
	printf("enter the array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n the sorted array in a accending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
