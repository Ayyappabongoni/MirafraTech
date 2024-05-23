
#include<stdio.h>
extern int a;
void function(void)
{
	printf("in function %d\n",a);
	a=20;
}
