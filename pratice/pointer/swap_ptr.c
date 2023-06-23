#include<stdio.h>

void swap(int *a,int *b)
{
	printf("before swap: %d %d\n",*a,*b);
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("%d %d\n",*a,*b);
}
int main()
{
	int a=10,b=20;
	swap(&a,&b);
}
