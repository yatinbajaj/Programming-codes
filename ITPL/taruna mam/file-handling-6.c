#include<stdio.h>
main()
{
	char str[15];
	int age;
	FILE *fptr;
	fptr=fopen("a5.txt","r");
	if(fptr==NULL)
	{
	printf("unable to open file");
    }
	else
	{
	        fscanf(fptr,"%s\t %d",str,&age);
			printf("%s\t %d",str,age);
		
	}
	printf("\nfile opened successfully");
	fclose(fptr);
	
}
