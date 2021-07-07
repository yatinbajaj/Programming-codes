#include<stdio.h>
int main()
{
	struct book
	{
		char name[25];
		char author[25];
		float price;
		int pages;
	};
	struct book b1={"let us c","yashwant",459.5,550};
	struct book b2={"c programming","reema thareja",459.5,550};
	struct book *ptr;
	struct book *ptr2;
	ptr2=&b2;
	ptr=&b1;
	printf(" with help variables:\t\n name:%s author:%s price:%f pages:%d",b1.name,b1.author,b1.price,b1.pages);
	printf("\n\n with help of pointer:\t\n name:%s author:%s price:%f pages:%d",ptr->name,ptr->author,ptr->price,ptr->pages);
	printf("\n\n with help of pointer:\t\n name:%s author:%s price:%f pages:%d",ptr2->name,ptr2->author,ptr2->price,ptr2->pages);
	
	
}
