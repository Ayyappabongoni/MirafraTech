#include <stdio.h>

int main()
{
    int a=10;
    int *p=&a;
    printf("%ld\n",sizeof(*p));//4
    printf("%ld\n",sizeof(p));//8

    return 0;
}

