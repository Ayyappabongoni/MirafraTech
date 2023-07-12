#include<stdio.h>

struct xyz
{
    int a;
    char ch;
    float f;
    
}s={1,'c',2.33};

int main()
{
    struct xyz s1=s;
    printf("%d\n %c\n%f",s1.a,s1.ch,s1.f);
    
}
