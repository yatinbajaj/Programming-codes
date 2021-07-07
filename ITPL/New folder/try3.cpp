#include<stdio.h>
int main()
{
	FILE *fp1,*fp2;
	int ch1,ch2;
	
	
	fp1=fopen("yat.TXT","r");
	fp2=fopen("b1.TXT","r");
	
	ch1=fgetc(fp1);
	ch2=fgetc(fp2);
	
	while(ch1!=EOF && ch2!=EOF && ch1==ch2)
	{
		ch1=fgetc(fp1);
		ch2=fgetc(fp2);
		
	}
	if(ch1==ch2)
	{
		printf("\nfiles are identical");
	}
	else
	{
	   printf("\nfiles are not identical");
	}
	fclose(fp1);
	fclose(fp2);
	
}
