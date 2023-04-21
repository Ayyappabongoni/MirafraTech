#include<stdio.h>
int main()
{
	int a=10;
	char *p=&a;
	char *q=(&a)+1;
	printf("%ld\n",q-p);
}
