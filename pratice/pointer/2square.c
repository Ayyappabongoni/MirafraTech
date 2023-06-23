#include<stdio.h>
int square(int n)
{
	int i,res=1;
	for(i=1;i<=n;i++)
	{
		res*=2;
	}
	return res;
}
int main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	int x=square(n);
	printf("square of n value is %d\n",x);
}
