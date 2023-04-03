#include<stdio.h>

extern char *p;
int fun()
{

p[0]='x';//possible
printf("extern:%s\n",p);
}
