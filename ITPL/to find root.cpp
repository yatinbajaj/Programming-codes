#include<math.h>
#include<stdio.h>
main()
{
	int a,b,c,d;
	float root1,root2;
	printf("1810992625\nyatin\n28-01-19\n");
	printf("\nenter the value of coffient of a,b,c:");
	scanf("\n%d%d%d",&a,&b,&c);
	
	d=b*b-4*a*c;
	if(d==0)
	     {
	     	printf("\nroots are real and equal:\n");
	     	printf("\nroot1=%f",-b/(2.0*a));
	     	printf("\nroot2=%f",-b/(2.0*a));
	     	
		 }
	if(d>0)
	     {
	     	printf("\nroots are real and distinct");
	     	
	     	root1=(-b+sqrt(d))/(2.0*a);
	     	root2=(-b-sqrt(d))/(2.0*a);
	     	
	     	printf("\nroot1=%f",root1);
	     	printf("\nroot2=%f",root2);
	     	
		 }
	if(d<0) 
	     {
	     	printf("\nroots are imaginary");
	     	
	     	printf("\nroot1=%f+i%f",-b/(2.0*a),sqrt(-d)/(2.0*a));
	     	printf("\nroot2=%f-i%f",-b/(2.0*a),sqrt(-d)/(2.0*a));
		 }
	
		 	 
	
		 	 
	
}
