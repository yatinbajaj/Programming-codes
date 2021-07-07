#include<stdio.h>
int main()
{
	FILE *fp;
	int count,i;
	fp=fopen("yat2.TXT","r");
	
	if(fp==NULL)
	{
		printf("\nfile not opened");
		
    }
    fseek(fp,0,2);
    count=ftell(fp);
    while(i<count)
    {
    	i++;
    	fseek(fp,-i,2);
    	printf("%c",fgetc(fp));
	}
	printf("\n");
	
	
	fclose(fp);
	
	
	

}
