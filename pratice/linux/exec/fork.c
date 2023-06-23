#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=fork();
	if(a==-1)
	{
		printf("the fork is failed\n");
	}
	if(a==0)
	{
		printf("hi this is child\n");
		printf("the pid of child is %d\n",getpid());
		exit(0);
	}
	if(a>0)
	{
		wait(NULL);
		printf("hi this is parent\n");
		printf("the pid of parent is %d\n",getppid());
	}
}
