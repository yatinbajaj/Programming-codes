#include<string.h>
#include<stdio.h>
int main()
{
	char str[20],*ptr;
	int vow=0,cons=0,digit=0,spaces=0;
	printf("enter the string:");
	gets(str);
	ptr=str;
	while(*ptr!='\0')
	{
	  if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='I'||*ptr=='O'||*ptr=='E'||*ptr=='U')
	    {
	    	vow++;
		}
		
		else 
		{
			cons++;
		}
	
	    ptr++;
	}
	printf("vowels:%d",vow);
	printf("\nconsonent:%d",cons);

	return 0;
	
}
