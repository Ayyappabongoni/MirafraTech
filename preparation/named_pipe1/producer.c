#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/fcntl.h>

#define path "pipe"

int main()
{
char s[30]="this is named pipe first prgm";
int x=open("pipe",O_WRONLY);
if(x<0)
{
perror("open failed\n");
exit(0);
}
write(x,s,sizeof(s));
close(x);
}
