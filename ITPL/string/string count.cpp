#include<string.h>
#include<stdio.h>
int main()
{
	char str[100],alphabet=0,spaces=0,spchar=0,digit=0;
	int i=0;
	printf("name:rudrish rana\nid no.:1810992609\n");
	printf("enter the string:");
	gets(str);
	
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			alphabet++;
			i++;
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			alphabet++;
			i++;
		}
		else
		 if(str[i]==' ')
		{
			spaces++;
			i++;
		}
		else
		 if(str[i]>='0'&&str[i]<='9')
		{
			digit++;
			i++;
		}
		else
		{
			spchar++;
			i++;
		}
		
	}
	printf("digit:%d",digit);
	printf("\nalphabet:%d",alphabet);
	printf("\nspaces:%d",spaces);
	printf("\nspecial character:%d",spchar);
	return 0;
}
