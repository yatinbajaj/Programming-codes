#include<string.h>
#include<stdio.h>
int main()
{
	char str1[50],str2[50],str3[50];
	char copy,n;
	printf("name:rudrish rana\nid no.:1810992609\n");
	printf("enter string 1:");
	gets(str1);
	printf("enter string 2:");
	gets(str2);
	
	printf("\nlength of string 1:%d\n",strlen(str1));
	printf("\ncat of strings:%s\n",strcat(str1,str2));
    printf("\ncopy of strings:%s\n",strcpy(str1,str2));
    printf("\nupper case:%s\n",strupr(str1));
    printf("\nlower case:%s\n",strlwr(str2));
    printf("\ncomparison:%d",strcmp(str1,str2));
    
    
	
	return 0;
	
	
	
}
