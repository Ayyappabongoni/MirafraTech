/*Find the absolute value of an integer without branching)
00000110                        (n = 6)
00000000                        (mask = 0)
00000110    ^                   (n + mask)
00000000                        (mask)
~~~~~~~~
00000110                        abs(n)
 

11111010                        (n = -6)
11111111                        (mask = -1)

11111001    ^                   (n + mask)
11111111                        (mask)
~~~~~~~~
00000110                        abs(n)*/


#include<stdio.h>
int absolute(int n)
{
	if(n>=0)
	{
		int mask=0;
		n=n+mask;
		n=n^mask;
		return n;
	}
	if(n<0)
	{
		int mask=-1;
		n=n+mask;
		n=n^mask;
		return n;
	}
}
int main()
{
	int a;
	printf("enter n value\n");
	scanf("%d",&a);
	int (*fptr)(int)=absolute;
	int x=(*fptr)(a);
	printf("the absolute value is %d\n",x);
}
