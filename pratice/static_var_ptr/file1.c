//static var can be acessed with extern using *ptr

#include<stdio.h>

static int x=5;
int *p=&x;//assign to a ptr

int main()
{
	printf("hello world\n");
function();
	return 0;
}

