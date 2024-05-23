#include <signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>


void signal_handler(int sig_no)
{
	if(sig_no=SIGINT)
	{
		printf("signal cought\n");
		system("ls");//or binary file ./a.out
		exit(0);
	}
}

int main()
{
	printf("pid of child %d\n",getpid());
	if(signal(2,signal_handler)==SIG_ERR)
	{
		perror("signal failed\n\n");
		exit(0);
	}


//signal(2,SIG_IGN);
//signal(2,SIG_DFL);
	while(1)
	{
	}
}
