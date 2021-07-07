#include<string.h>
#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	char copy;
	printf("enter string 1:");
	gets(str1);
	printf("enter string 2:");
	gets(str2);
	
	printf("\ncomparison%d",strcmp(str1,str2));
	return 0;
	
	
	
}
