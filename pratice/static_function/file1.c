// static fun accessed with fun pointer
#include<stdio.h>

static int fun(int a,int b)
{

	return a+b;
}

int (*fptr)()=fun;

int main()
{
	function();
	printf("helloworld\n");
}
