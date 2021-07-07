#include<stdio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("b1.TXT","a");
	fprintf(fp,"yo");
	fclose(fp);
}
