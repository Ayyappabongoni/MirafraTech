#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
#include <stdlib.h>
int main()
{

	printf("main\n");//only one time

	int x=fork();
	if(x<0)
	{
		printf("fork failed\n");
	}
	if(x==0)
	{
		printf("this is child\n");
		//exit(0);
		
	}
	else
	{
		int status;
		wait(&status);//without exit default 0
		printf("this is parent\n");
		printf("status %d\n",status);
	}

	printf("this is below main\n");//twice because of parallel execution
}
