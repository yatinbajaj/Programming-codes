#include<stdio.h>
int main()
{
	struct employee
	{
		int id;
		char name[25];
		long int phn;
		char city[25];
		
	};
	struct employee e1;
	struct employee e2;
	struct employee e3;
	struct employee e4;
	printf("enter employees details id,name,phn,city 1:");
	scanf("%d%s%d%s",&e1.id,&e1.name,&e1.phn,&e1.city);
	printf("\nenter employees details id,name,phn,city 2:");
	scanf("%d%s%d%s",&e2.id,&e2.name,&e2.phn,&e2.city);
	printf("\nenter employees details 3 id,name,phn,city:");
	scanf("%d%s%d%s",&e3.id,&e3.name,&e3.phn,&e3.city);
	printf("employees detail of infosys:\n");
	
	printf("\nID:%d\tNAME:%s\tPHN:%d\tCITY:%s",e1.id,e1.name,e1.phn,e1.city);
	printf("\nID:%d\tNAME:%s\tPHN:%d\tCITY:%s",e2.id,e2.name,e2.phn,e2.city);
	printf("\nID:%d\tNAME:%s\tPHN:%d\tCITY:%s",e3.id,e3.name,e3.phn,e3.city);
}
