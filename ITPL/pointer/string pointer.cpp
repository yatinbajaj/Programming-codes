#include<string.h>
#include<stdio.h>
int main()
{
	char str[20],*ptr;
	printf("enter the string:\n");
	gets(str);
	ptr=str;
	printf("string p:");
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	return 0;
}
