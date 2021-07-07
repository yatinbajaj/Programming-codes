#include<stdio.h>
main()
{
	char ch;
	printf("1810992625\nyatin\n28-01-19\n");
	printf("\nenter character:");
	scanf("%c",&ch);
	
	if(ch>=65&&ch<=90||ch>=97&&ch<=122)
	   {
	   	printf("you enter the alphabet");
	    	{
	   		    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	            	{
					  printf(" which is  vowel");
					}
				else
					{
					   printf(" which is consonent ");
					}
	            		
	    	}
	   	
	   }
    else
	   if(ch>=48&&ch<=57)
	     {
	     	printf("\nyou enter the digit");
	     	
		 }
	else
	     {
	     	printf("\nyou enter the special character");
		 }
	
	

}
