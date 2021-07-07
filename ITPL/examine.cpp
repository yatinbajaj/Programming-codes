#include<stdio.h>
main()
{
	int i,age;
	
	for(i=1;i<=10;i++)
	{
		printf("%d",i);	
	
	printf("enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	printf("eligible for vote %d",age);
	
	
	if(age>=18)
	continue;
	printf("hello");
	
}
	 
}
