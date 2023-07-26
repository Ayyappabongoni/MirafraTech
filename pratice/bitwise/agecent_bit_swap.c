/*
1001 0110

op= 0110 1001
*/


#include <stdio.h>

int main()
{
	short int a=0x67
		;
	int i=0;
	for(i=0;i<8;i=i+2)
	{
		if( ((a>>i)&1)  !=((a>>i+1)&1) )
		{
			a=a^(1<<i);
			a=a^(1<<i+1);
		}
	}
	printf("%x",a);
	return 0;
}

