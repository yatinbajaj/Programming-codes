#include<stdio.h>
main()
{
	char ch;
	FILE *fptr;
	fptr=fopen("a4.txt","r");
	if(fptr==NULL)
	{
	printf("unable to open file");
    }
	else
	{
		while(!feof(fptr))
		{
			ch=fgetc(fptr);
			printf("\n%c",ch);
		}
	}
	printf("file opened successfully");
	fclose(fptr);
	
}
