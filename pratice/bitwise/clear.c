#include<stdio.h>
#define clear(x,p)  ( x=x&(~(1<<p)) )

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a= a & (~(1<<b));
	printf(" clear :%d\n",a);
	printf("clear:%d\n",clear(a,b));
}

