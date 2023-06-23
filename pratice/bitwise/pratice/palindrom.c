#include<stdio.h>
int palindrom(int a)
{	int k=a;
	int temp=0;
	int x=0,i=0;
	while(k)
	{
		temp=( (temp<<1)|(k&1));
		k=k>>1;
	}
	if(temp==a)
		return 1;
	else
		return 0;
}
int main()
{
	int a;
	printf("enter the value\n");
	scanf("%d",&a);
	int x=palindrom(a);
	if(x==1)
		printf("palindrom\n");
	else
		printf("not palindrom");
}
