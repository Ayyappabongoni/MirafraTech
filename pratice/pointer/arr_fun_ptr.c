#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
	int a=10,b=10;

	int (*ptr[4])(int ,int)={add,sub,mul,div};
	printf("add:%d\n",(*ptr[0])(a,b));
	printf("sud:%d\n",(*ptr[1])(a,b));
	printf("mul:%d\n",(*ptr[2])(a,b));
	printf("div:%d\n",(*ptr[3])(a,b));
}

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
