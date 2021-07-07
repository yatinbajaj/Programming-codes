#include<stdio.h>
int len(char str[]);
int main()
{
	char str[100];
	int res;
	printf("enter the string:");
	gets(str);
	res=len(str);
	printf("length of string :%d",res);
	return 0;
	
}
int len(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
