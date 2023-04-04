#include<stdio.h>
#include<stdlib.h>

static char s[10]={"kernel"};//const modifi not possible
char *p=s;

int fun();
int main()
{
int a=1;
fun();
printf("main:%s\n",s);
}
