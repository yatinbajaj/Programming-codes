#include<stdio.h>
int main()
{
	FILE *fp;
	int i;
	int age;
	char s[50];
	fp=fopen("yat.TXT","r");
	if(fp==NULL)
	{
		printf("\nfile could not opened");
	}
	for(i=0;i<3;i++)
	{
		fscanf(fp,"%s%d",&s,&age);
		printf("%s",s);
		printf("%d\n",age);
		
	}
	
	
	
	fclose(fp);

	
}
