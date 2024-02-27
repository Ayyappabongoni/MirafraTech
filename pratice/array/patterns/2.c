/*
1
01
101
0101
10101

*/


#include<stdio.h>
int main()
{
	int i=0,j=0,n=5;

	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if((i+j)%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
}
