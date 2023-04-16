#include<stdio.h>
int main()
{
	int a;
	printf("enter  the no\n");
	scanf("%d",&a);
	int i=0;
	for(i=32;i>=1;i--)
	{
		if( (a&(1<<i))==0)
		{
			printf("0");
		}
		else
			printf("1");
	}
}
