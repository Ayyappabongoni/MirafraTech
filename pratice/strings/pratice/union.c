#include<stdio.h>
union string
{
int a;
char s[5];
char d[5];
};

int main()
{
union string x;
scanf("%s\n",x.s);
printf("%d\n",x.a);
printf("%s %s\n",x.s,x.d);
printf("size:%lu\n",sizeof(x));
}
