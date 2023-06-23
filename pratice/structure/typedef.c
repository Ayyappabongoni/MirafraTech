#include<stdio.h>

typedef struct s
{
    int a;
    int b;
    
}ss;//new name

int main()
{
    ss A;
    
    A.a=10;
    A.b=20;
    
    printf("%d,%d\n",A.a,A.b);
    
}
