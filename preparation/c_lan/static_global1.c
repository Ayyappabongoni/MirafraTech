#include<stdio.h>
static int a=10;
void function(int *);
int main()
{
	int *p=&a;
	function(p);
	printf("main %d\n",a);
}
