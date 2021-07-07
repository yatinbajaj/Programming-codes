#include<stdio.h>
#include<math.h>
main()
{
	int i,n;
	float a[80],sum1=0.0,avg;
	printf("name:rudrish rana\t\nid:1810992609\ndate:18-02-19\n");
	printf("how many number you want:\n");
	scanf("%d",&n);
	printf("populating the array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		sum1=sum1+a[i];
	}
	printf("\nsum1:%f",sum1);
	avg=sum1/n;
	printf("\nmean=%f",avg);
	sum1=0.0;
	for(i=0;i<n;i++)
	{
		
		sum1=sum1+(a[i]-avg)*(a[i]-avg);
	}
	printf("\nS.D=%f",sqrt(sum1/n));
	return 0;
}
