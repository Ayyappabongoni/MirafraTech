#include<stdio.h>
int main()
{
	int x;
	printf("enter the value\n"); 
	scanf("%x",&x);
	if((char )x & 1)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
}
