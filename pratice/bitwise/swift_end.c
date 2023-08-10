//12345678 o/p==82345671
#include <stdio.h>

int main()
{
    int x=0x12345678;
    int y=(((x&0x10000000)>>28) | ((x&0x00000008)<<28));
    x=(x&(~(0x0000000f<<28)));
    x=(x&(~(0x0000000f<<0)));
    x=x|y;
    printf("%x\n",y);
    printf("%x",x);

    return 0;
}

