#include<stdio.h>
int main()
{
	int a,c=0,b,i=1;
	printf("enter the value\n");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%2;
		c=c+b*i;
		i=i*10;
		a=a/2;
	}
	printf("binary is :%d\n",c);
}
