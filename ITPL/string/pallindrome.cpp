#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],revstr[100],temp;
	int i=0,j=0;
	printf("name:rudrish rana\nid no.:1810992609\n");
	printf("enter the sting:");
	gets(str);
	strcpy(revstr,str);
	j=strlen(revstr)-1;
	i=0;
	while(i<j)
	{
		temp=revstr[j];
		revstr[j]=revstr[i];
		revstr[i]=temp;
		j--;
		i++;
	}
	printf("\nreverse string is:");
	puts(revstr);
	if(strcmp(str,revstr)==0)
	printf("\npallindrome");
	else
	printf("not pallindrome");
	
	
	
	
	return 0;
}

