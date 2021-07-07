#include<stdio.h>
int main()
{
	FILE *fp;
	int i;
	fp=fopen("b1.TXT","w");
	if(fp==NULL)
	{
		printf("\nfile could not opened");
	}
	for(i=0;i<3;i++)
	{
		fprintf(fp,"this is my first file\n");
		
	}
	
	fclose(fp);
}
