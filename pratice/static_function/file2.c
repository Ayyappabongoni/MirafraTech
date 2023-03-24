#include<stdio.h>

extern int (*fptr)();

void function()
{
printf("%d\n",(*fptr)(5,5));
}
