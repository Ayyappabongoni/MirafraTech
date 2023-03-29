#include<stdio.h>
int main()
{
int x;
printf("enter the value\n");
scanf("%x",&x);
x=(( (x&0xff000000) >>24) | ( (x&0x00ff0000) >>8) | ( (x&0x0000ff00) <<8) | ( (x&0x000000ff) <<24));
printf("%x",x);
}
