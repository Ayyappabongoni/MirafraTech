#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ret;
	ret=fork();
	if(ret<0)
	{
		printf("fork is faild\n");
	}
	printf("fork returned %d\n",ret);
	if(ret==0)
	{
		printf("this is child\n");
		printf("child pid id %d\n",(int)getpid());
		//sleep(2);
		exit(99);
	}
	else if(ret>0){
		int status=0;
		//wait(&status);
		WEXITSTATUS(status);
		printf("the return value is %d\n",status);
		printf("this is parent \n");
		printf("parent pid id %d\n",(int)getppid());

	}
}

