#include<stdio.h>
  struct clg
  {
  	int roll;
  	char name[20];
  };
  void fun(struct clg *c1);
  int main()
  {
  	struct clg c1={ 625,"yatin"};
  	fun(&c1);
  }
  void fun(struct clg *c1)
  {
  	printf("roll:%d name:%s",c1->roll,c1->name);
  }

