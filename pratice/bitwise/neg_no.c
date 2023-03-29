#include<stdio.h>
int main()
{
	int n;
	printf("enter no\n");
	scanf("%d",&n);
	if( ( (n>>31) & 1 )  ==1)
	{
		printf("%d is negative no\n",n);
	}
	else
		printf("%d is not negative\n",n);
}
