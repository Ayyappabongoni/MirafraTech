#include<stdio.h>
void function(int a)
{
	int i=1,b=0;
	printf("%d table is :-\n",a);
	while(i<=10)
	{
		b=a*i;
		printf("%d * %d = %d\n",a,i,b);
		i++;
	}
}
int main()
{
	int a;
	printf("enter number for table\n");
	scanf("%d",&a);
	void (*p)(int)=function;
	(*p)(a);
}
