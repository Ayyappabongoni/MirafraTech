#include<stdio.h>

extern int (*p)(int,int);
void add(void)
{
	int a=(*p)(10,10);
	printf("%d\n",a);
}
