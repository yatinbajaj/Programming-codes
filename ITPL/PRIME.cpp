#include<stdio.h>
main()
{
	int n,i,r,flag=0;
	printf("name:\trudrish rana\nidno:\t1810992609\nplace:\tchitkara university\ndate:\t22/01/2019\n");
	
	printf("enter the number n:");
	scanf("%d",&n);
	i=2;
	while(i<=n-1)
	{
		r=n%i;
		 if(r==0)
		 {
		 	flag=1;
		 	break;
		 }
		 i++;
	}
	if(flag==0)
	{
		printf("prime");
		
	}
	else
	{
		printf("not prime");
	}
}
	
