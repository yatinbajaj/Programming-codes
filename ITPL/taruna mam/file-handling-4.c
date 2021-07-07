#include<stdio.h>
main()
{
	char name[15];
	int age;
	FILE *fptr;
	fptr=fopen("a4.txt","w");
	if(fptr==NULL)
	printf("unable to open file");
	else
	printf("Enter name and age");
	scanf("%s %d",name,&age);
	fprintf(fptr,"%s %d",name,age);
    printf("file opened successfully");
	fclose(fptr);
	
}
