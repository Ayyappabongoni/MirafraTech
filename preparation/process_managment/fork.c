#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int pid=fork();
	printf("return value %d\n",pid);
	if(pid==0)
	{
		printf("this is child with pid %d\n",getpid());
		exit(0);
	}
	else
	{
		int status;
		wait(&status);
		sleep(30);
		printf("this is parent with pid %d\n",getppid());

	}
}
