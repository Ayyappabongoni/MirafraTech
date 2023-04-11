#include<stdio.h>
int fun(int a,int b);
int main()
{
	int a=10,b=10;

	int (*ptr)(int,int)=fun;
	int c=(*ptr)(a,b);
	printf("%d\n",c);
}

int fun(int a,int b)
{
	return a+b;
}
