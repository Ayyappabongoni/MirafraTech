#include<stdio.h>
int main()
{
	int a;
	printf("enter no\n");
	scanf("%d",&a);
	a = (a & 0xF0 >> 4) | (a & 0x0F << 4);
	printf("%x\n",a);
}
