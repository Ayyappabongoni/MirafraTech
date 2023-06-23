#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
execlp("./a.out","./a.out",(char *)0);
}
