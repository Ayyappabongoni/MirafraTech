#include<unistd.h>
#include<stdio.h>
int main()
{
char *p="/bin/pwd";
execl(p,"pwd",(char *)NULL);
return 0;
}

