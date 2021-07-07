#include<stdio.h>
main()
{
	FILE *fptr;
	fptr=fopen("a1.txt","w");
	if(fptr==NULL)
	printf("unable to open file");
	else
	printf("file opened successfully");
	fclose(fptr);
	
}
