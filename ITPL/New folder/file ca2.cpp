#include<stdio.h>
int main()
{
	FILE *fp;
	int i;
	int age;
	char s[50];
	fp=fopen("yat.TXT","w+");
	if(fp==NULL)
	{
		printf("\nfile could not opened");
	}
	for(i=0;i<3;i++)
	{
		fprintf(fp,"%s%d\n","age",18);
		
	}
	
	
	
	fclose(fp);

	
}
