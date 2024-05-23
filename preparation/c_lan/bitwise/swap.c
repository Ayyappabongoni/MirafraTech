/*01 10  2-4(swap)
11 00
*/

#include<stdio.h>

int main()
{
int a=0x6;
int b=( ((a&(1<<1))<<2) | ((a&(1<<3))>>2));

a=(a&~(1<<1));//clearing bits
a=(a&~(1<<3));//clearing bits

a=a|b;
printf("%d",a);
}

