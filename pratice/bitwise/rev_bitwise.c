#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the value\n");
	scanf("%d",&n);
	for(i=0,j=31;i<j;i++,j--)
	{
		if( (n&(1<<i)) != (n&(1<<j)) )
		{
			n=n^(1<<i);
			n=n^(1<<j);
		}
	}
	printf("%d\n",n);
}

/*
00 0
01 1
10 1
11 0
*/
