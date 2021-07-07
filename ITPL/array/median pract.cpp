#include<stdio.h>
int main()
{
	int i,n,min,j,temp,num;
	float a[100],k,l;
	printf("how many elements you want:");
	scanf("%d",&n);
	
	printf("enter the array elements:\n");

	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
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
		printf("%f",a[i]);
		printf("\n");
	}
	
	if(n%2==0)
	{
	  k=n/2;
	  i=k;
	  l=(a[i-1]+a[i])/2;
	  printf("median=%f",l);
	
	}
	else
	{
		num=(i+1)/2;
		i=num;
		printf("\nmedian=%f",a[i-1]);
		
	}
	return 0;
}
