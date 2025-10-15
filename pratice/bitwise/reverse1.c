/*

0000 1000 0000 1000 0000 0000 0000 0000
*/
#include<stdio.h>
int main()
{
	int var=0x1010;

	int i=0;
	for(i=0;i<32;i++)
	{
		if((var&(1<<i)) >0)
		{
			printf("1");
		}
		else{
			printf("0");
		}
	}

}
