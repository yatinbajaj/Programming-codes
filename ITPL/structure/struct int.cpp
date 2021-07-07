#include<stdio.h>
int main()
{
	struct book
	{
		char name[20];
		float price;
		int pages;
		
	};
	
	struct book b1={"reema thareja",112.88,400};
	struct book b2={"let us c",125.2,450};
	
	printf("book information:\n");
	printf("\n Name:%s \tPrice:%f \tPages:%d",b1.name,b1.price,b1.pages);
	printf("\n Name:%s \t\tPrice:%f \tPages:%d",b2.name,b2.price,b2.pages);

}
