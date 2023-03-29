#include<stdio.h>
int main()
{
	int a;
	printf("enter the value\n");
	scanf("%d",&a);
	if( (a&(a-1)) ==0)
		printf("%d is power of 2",a);
	else
		printf("%d is not power of 2",a);
}
