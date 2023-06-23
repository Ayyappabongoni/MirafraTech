#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void signal_handler(int signo)
{
if()
}

int main()
{
	int pid=fork();
	if(pid==-1)
	{
		printf("fork failed\n");
		exit(0);
	}
	if(pid==0)
	{
		sleep(20);
		printf("this is chid with pid(%d)\n",getpid());
		
		printf("performing operation");
		printf("exiting child\n");
		exit(1);
	}
	else
	{
		int status;
		printf("*********");
	//	wait(&status);
		printf("this is parent\n");
		printf("pid(%d)\n",getppid());
		printf("this is chid with pid(%d)\n",getpid());
		
		printf("performing operation");
		printf("exiting parent\n");
	}
}
