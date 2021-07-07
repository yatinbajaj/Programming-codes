#include<stdio.h>
main()
{
	char str[15];
	FILE *fptr;
	fptr=fopen("a3.txt","w");
	if(fptr==NULL)
	printf("unable to open file");
	else
	printf("Enter string");
	gets(str);
	 fputs(str,fptr);
    printf("file opened successfully");
	fclose(fptr);
	
}
