#include<math.h>
#include<stdio.h>
main()
{
	int r[80],sum=0,i,j,num;
	printf("enter the value of num:");
	scanf("%d",&num);
	//spliting of a num in to  digit
	i=0;
	while(num>0)
	{
		r[i]=num%10;
		num=num/10;
		i++;
		
	}
	printf("decimal equivalent:");
	for(j=0;j<i;j++)
	{
		sum=sum+r[j]*pow(8,j);
	}
	printf("%d",sum);
}
