#include<stdio.h>
int main()
{
	int a,c=0;
	printf("enter the value\n");
	scanf("%d",&a);
	if((a&(a-1))==0)
	{
		while((a&1)==0)
		{
			c++;
			a=a>>1;
		}
	}
	if(c%2==0)
	{
		printf("power\n");
	}
	else
		printf("not power\n");
}

