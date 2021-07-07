
 #include<stdio.h>
int main()
{
	int a[100],i,n,min,j,temp;
	printf("how many elements you want:");
	scanf("%d",&n);
	
	printf("enter the array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
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
