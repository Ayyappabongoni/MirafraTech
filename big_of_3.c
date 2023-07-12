#include<stdio.h>
#define macro(a,b,c) (((a>b)?a:b)>c)?b:c

int main()
{
    int a=2,b=3,c=1;
    printf("%d\n",macro(a,b,c));
    return 0;
}
