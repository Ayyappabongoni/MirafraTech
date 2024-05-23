#include<stdio.h>
#include<unistd.h>

int main()
{
char *a="/bin/ls";
//char *s[]={"ls","-al"};
//execl(a,s[0],s[1],(char *)NULL);
execl(a,"ls","-al",(char *)NULL);
}
