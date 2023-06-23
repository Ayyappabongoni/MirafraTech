#include<stdio.h>
int main()
{
	int n;
	printf("enter the value\n");
	scanf("%x",&n);
	n=((n&0xf0)>>4)|((n&0x0f)<<4);
	printf("%x\n",n);
}

// 0000 0100

// 0000 0100   0000 0100
// 1111 0000   0000 1111 &

// 0000 0000   0000 0100 

//>> 0000 0000       0100 0000 <<


//0000 0000
//0100 0000 |

//ans  0100 0000 nibble swap


