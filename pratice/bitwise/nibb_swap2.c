#include<stdio.h>
int main()
{
	int a=0x1234;

	int x=((a&0xff00)>>8);
	int y=((a&0x00ff)<<8);

	a=(x|y);
	printf("%x",a);
}

