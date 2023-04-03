#include<stdio.h>
int main()
{
	int a,i,rem;
	printf("enter the value\n");
	scanf("%d",&a);
	for(i=0;i<4;i++)
	{
		rem=a>>i;
		if((rem&1)==1)
			printf("1");
		else
			printf("0");
	}
}


