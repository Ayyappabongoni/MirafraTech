#include<stdio.h>
int main()
{
	int a;
	printf("enter the no\n");
	scanf("%d",&a);
	if((a&1)==0) 
		printf("even\n");
	else
		printf("odd\n");
}
