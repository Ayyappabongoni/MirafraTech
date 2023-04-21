#include<stdio.h>
int main()
{
	int a,res=0,temp=0;
	printf("enter n value upto\n");
	scanf("%d",&a);
	int i;
	for(i=1;i<=a;i++)
	{
		res+=i*i;
		printf("square of %d is %d\n",i,res);
		temp+=res;
		res=0;
	}
	printf("after square of n numbers value is :%d\n",temp);
}
