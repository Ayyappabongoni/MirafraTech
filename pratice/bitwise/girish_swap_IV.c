/*
(11)00 11(00)
0000 1111
*/

#include<stdio.h>
int main()
{
int x=0xcc,a=0,b=0;

a=( ((x&0x00)<<6) | ((x&0xc0)>>6));

/*a=(x&(0x00))<<6;
b=(x&(0xc0))>>6;
*/

x=x&(~(0xc0));//clear bits
x=a|x;


printf("%X\n",x);


}
