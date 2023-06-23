/*Find position of the rightmost set bit.
00010100    &                (n = 20)
00010011                     (n-1 = 19)
~~~~~~~~
00010000    ^                (XOR result number with n)
00010100
~~~~~~~~
00000100  ——  rightmost set bit will tell us the position*/

#include<stdio.h>
void binary(int a)
{
	int i;
	for(i=31;i>=0;i--)
	{
		if( (a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
}
int main()
{
	int a,i;
	printf("enter the value\n");
	scanf("%d",&a);
	binary(a);
	int x=( (a&(a-1)) ^a); //or (n^n-1)
	printf("\nsetbit found at %d\n",x);
}
