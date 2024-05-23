#include<stdio.h>
void function(int *p)
{
	printf("function %d\n",*p);
	*p=20;
}
int main()
{
	static int a=10;
	int *p=&a;
	function(p);
	printf("main %d\n",a);
}
