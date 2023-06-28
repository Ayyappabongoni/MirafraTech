#include<stdio.h>
extern void add(int,int);
extern void sub(int,int);
extern void mul(int,int);
extern void div(int,int);

int main()
{
	int a,b;
	printf("enter the nubers\n");
	scanf("%d %d",&a,&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}
