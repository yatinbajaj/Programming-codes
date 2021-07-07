#include<string.h>
#include<stdio.h>
int main()
{
	char str1[50],str2[50],str3[50];
	printf("name:yatin\nid no.:1810992625\n");
	printf("enter string 1:");
	gets(str1);
	printf("enter string 2:");
	gets(str2);
	printf("\ncomparison:%d",strcmp(str1,str2));
}
