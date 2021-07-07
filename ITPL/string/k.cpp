#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,n,temp,res;
	char str[50],revstr[50],str2[50];
	printf("enter the str1:");
	gets(str);
	printf("\nenter the str2:");
	gets(str2);
	
	printf("press 1 to cmp string");
	printf("\npress 2 to check pallindrome of string1");
	printf("\npress 3 to cat of string");
	printf("\npress 4 to len of string");
	printf("\npress 5 to cpy of string");
	
	printf("\nenter the number n:");
	scanf("%d",&n);
	
	
	
	switch(n)
	{
		case 1:if(strcmp(str,str2)==0)
		{
			printf("same\n");
		}
		else
		{
			printf("not same:");
		}
		break;
		
		case 2:strcpy(revstr,str);
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
	break;
	
	case 3:strcat(str,str2);
	printf("catenation:%s",str);
	break;
	
	case 4:res=strlen(str);
	printf("%d",res);
	break;
	
	case 5:strcpy(str2,str);
	printf("str2:%s",str2);
	
	default :printf("enter valid input:");
	
	return 0;
}
}
