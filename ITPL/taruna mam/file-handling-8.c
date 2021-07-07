#include<stdio.h>
main()
{
	char str[15];
	FILE *fptr;
	fptr=fopen("a5.txt","r");
	if(fptr==NULL)
	{
	printf("unable to open file");
    }
	else
	{
	        fgets(str,15,fptr);
			printf("%s",str);
		
	}
	printf("\nfile opened successfully");
	fclose(fptr);
	
}
