#include<stdio.h>
int main()
{
	int x = 0x4321; 

	if((char)x & 1)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
}
