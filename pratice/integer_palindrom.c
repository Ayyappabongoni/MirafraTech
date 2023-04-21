#include<stdio.h>
int main()
{
	int n;
	printf("enter value\n");
	scanf("%d",&n);
	int temp=n;
	int x=0,res=0;
	while(n>0)
	{
		x=n%10;
		n=n/10;
		res=(res*10)+x;
	}

	if(res==temp)
	{
		printf("palindrom\n");
	}
	else
		printf("not palindrom\n");
}
