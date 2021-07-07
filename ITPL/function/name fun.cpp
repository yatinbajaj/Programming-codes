#include<stdio.h>
void name(char[],int count);
int main()
{
	char str[100];
	int count=0;
	printf("enter the string:");
	gets(str);
	name(str,count);
	return 0;
}
void name(char str[],int count)
{
	printf("Name%d:%s",count+1,str);
	printf("\n");
	count ++;
	if(count<10)
	{
		name(str,count);
    }
    
}
