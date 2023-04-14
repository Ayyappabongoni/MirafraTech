#include<stdio.h>

struct ss
{
const int a;
const int b;
};

int main()
{
static struct ss s={1,2};
printf("%d%d",s.a,s.b);
}
