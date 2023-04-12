#include<stdio.h>
int main()
{
	short int x=0;
	int a=12,b=13,c=15;

	x=x|a;// 0000 0000 0000 1100
	x=x|(b<<4);//0000 0000 1101 0000
	x=x|(c<<8);//0000 1111 0000 0000
	printf("%x\n",x);

	int a2=0,b2=0,c2=0;
	a2=((x)&0x0000000f);
	b2=((x>>4)&0x0000000f);
	c2=((x>>8)&0x0000000f);

	printf("after extracting\n");
	printf("%x\n%x\n%x\n",a2,b2,c2);
	printf("%x\n",x);
}
