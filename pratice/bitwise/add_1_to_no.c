#include<stdio.h>
int main()
{
	int a;
	printf("enter no\n");
	scanf("%d",&a);
	a=-(~a);
	printf("%d",a);
}
