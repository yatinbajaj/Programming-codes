#include<stdio.h>
int main()
{
	int a[100],i=0,j,n,k=0,frequency=0,num=0,maxvalue[100],maxfreq=0,c=1;
	
	printf("enter how many element mode is:");
	scanf("%d",&n);
	
	printf("\nenter the elements of mode:\n");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 printf("\nelements of modes are:");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
	 printf("\nnumber with higher frequency:\n");
	 for(i=0;i<n-1;++i)
	 {
	 	
	 	frequency=0;
	 	{
	 		for(j=i+1;j<n;++j)
	 		{
	 			if(a[j]==a[i])
	 			{
	 				
	 		      frequency++;
	 				
				 }
				 if((frequency>maxfreq)&&(frequency!=0))
				 {
				 	k=0;
				 	maxfreq=frequency;
				 	maxvalue[k]=a[i];
				 	k++;
				 }
				 else if(frequency==maxfreq)
				 {
				 	maxvalue[k]=a[i];
				 	k++;
				 }
				 
            }
            for(i=0;i<n;i++)
            {
            	if(a[i]==maxvalue[i])
            	c++;
            }
            		
			
			if(c==n)
			{
				printf("\nnomode");
				
			}
		
			else
			{
				printf("\nmode\t=");
				for(i=0;i<k;i++)
				{
					printf("%d",maxvalue[i]);
				}
				printf("\n");
			}
		
				
		 }
			 
     }
     
}
	 
	 
