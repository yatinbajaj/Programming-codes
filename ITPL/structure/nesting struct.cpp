#include<stdio.h>
int main()
{
	struct address
	{
		int phone;
		char name[25];
		char city[25];
		int pin;
		
	};
	struct emp
	{
		char name[25];
		struct address a;
	};
	struct emp e {"yat",9045,"yat","ambala",134003};
	printf("\n name:%s  phone:%d city:%s pin:%d",e.name,e.a.phone,e.a.city,e.a.pin);
}
