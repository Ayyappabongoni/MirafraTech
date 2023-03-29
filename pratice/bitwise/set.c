#include<stdio.h>
#define set(x,p)  ( x=x|(1<<p) )
int main()
{

	int a,b;
	scanf("%d %d",&a,&b);
	a=a|(1<<b);
	printf("%d\n",a);
	printf("%d\n",set(a,b));


}
