#include<stdio.h>
main()
{
	char str[20]="hello just call me";
	int i;
	int length=strlen(str);
	FILE *fptr;
	fptr=fopen("a2.txt","a");
	if(fptr==NULL)
	printf("unable to open file");
	else
	for(i=0;i<length;i++)
	{
	 fputc(str[i],fptr);
    }
	printf("file opened successfully");
	fclose(fptr);
	
}
