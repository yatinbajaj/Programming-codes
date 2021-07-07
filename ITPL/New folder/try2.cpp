#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[50];
	fp=fopen("yat2.TXT","w+");
	
	if(fp==NULL)
	{
		printf("\nfile not opened");
		
	}
	fputs("tommorow",fp);
	if(fgets(ch,40,fp)!=NULL)
	printf("\n%s",ch);
	fclose(fp);
	
	
	

}
