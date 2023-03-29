#include<stdio.h>
#define toggle(a,b) (a=a^(1<<b))
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);

	a=a^(1<<b);

//	printf("toggle :%d\n",toggle(a,b));

	printf("toggle :%d\n",a);
}
