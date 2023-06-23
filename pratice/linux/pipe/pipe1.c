#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdlib.h>
#include <stdio.h>
#include<string.h>
int main()
{
	int fd[2];
	if( (pipe(fd)<0) )
	{
		printf("pipe failed\n");
		exit(0);
	}
	int x=fork();
	if(x==-1)
	{
		printf("fork failed\n");
		exit(0);
	}

	if(x==0)
	{
		char s[]="my name is ayyappa bongoni am from karimnagar";

		close(fd[0]);//close other side
		write(fd[1],s,strlen(s)+1);//f[1]--->f[0]
		close(fd[1]);
	}
	else
	{char buffer[50];
		close(fd[1]);//close other side
		read(fd[0],buffer,50);
		printf("%s\n",buffer);
		close(fd[0]);
	}
}

