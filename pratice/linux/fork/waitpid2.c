#include <sys/types.h>
#include <sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int x=fork();

	if(x<0)
	{
		printf("fork is failed\n");
		exit(1);
	}

	if(x==0){
		printf("this is child running...\n");
		sleep(3);
		printf("child is execting\n");
		return 17;
	}

	else{
		int status;
		waitpid(x,&status,0);
		printf("status return %d\n",status);
		printf("parent is running...\n");
		printf("the return vale of parent is %d\n",WEXITSTATUS(status));
		printf("parent is execting\n");
	}
}
