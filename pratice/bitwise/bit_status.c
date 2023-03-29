#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the bit no and bit\n");
	scanf("%d%d",&a,&b);

	if(a&(1<<b)!=0)
	{
		printf("on\n");
	}
	else
		printf("off\n");

}
