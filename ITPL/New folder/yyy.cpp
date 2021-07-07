#include <stdio.h>
#include<string.h>

int main()
{
   char str[1000], ch;
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   

   for(i = 0; str[i] != '\0'; ++i)
   {
      ch=str[i];
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      {
      	printf("\n%c is vowel",ch);
      }
	  
	  else
	  {
	  	printf("\n%c is consonent",ch);
	  }
     
    
   }

  

   return 0;
}
