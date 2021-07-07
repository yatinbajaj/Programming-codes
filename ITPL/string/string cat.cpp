#include<stdio.h>
#include<string.h>
int main()
{
	
	char str1[10],str2[10];
	
	int i=0;
	printf("enter string one:");
	gets(str1);
	printf("enter string two:");
	gets(str2);
	
	strcat(str1,str2);
	
	puts(str1);
	
	return 0;
}
