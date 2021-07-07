#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total=0;
	float per;
	printf("enter marks of 5 subject\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	total=m1+m2+m3+m4+m5;
	per=total*100/500;
	printf("per of 5 subject %d",per);
	
	if(per>=60&&per<=100)
	printf("grade A");
	else
	if(per>=50&&per<60)
	printf("grade B");
	else
	if(per>=40&&per<50)
	printf("grade c");
	else
	printf("grade D");
}
