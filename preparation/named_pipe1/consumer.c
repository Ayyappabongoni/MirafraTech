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
	char s[30];
	int x=open("pipe",O_RDONLY);
	if(x<0)
	{
		perror("open failed\n");
		exit(0);
	}
	read(x,s,sizeof(s));
	printf("receved data is \n%s\n",s);
	close(x);
}

