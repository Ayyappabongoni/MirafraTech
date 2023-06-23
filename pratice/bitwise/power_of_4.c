#include<stdio.h>
int main()
{
	int n;
	printf("enter the value\n");
	scanf("%d",&n);
	if((n > 0) && ((n & (n - 1))== 0) && ((n & 0xAAAAAAAA) == 0))//a=1010 32bits
	{
		printf("power\n");
	}
	else
		printf("not power\n");
}

