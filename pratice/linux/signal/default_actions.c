#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>


void signal_handler(int signo)
{
	if(signo==SIGINT)
	{
		printf("sigint ignored\n");
		exit(0);
	}
	if(signo==SIGTERM)
	{
		printf("sigterm cought\n");
		exit(0);
	}
}

int main()
{
	printf("process id is (%d)\n",getpid());

	if( signal(15,SIG_DFL)==SIG_ERR)//15 is SIGTERM
	{
		printf("sigterm failed\n");
		exit(0);
	}
/*	if(signal(SIGINT,signal_handler)==SIG_ERR)//sig_ign ignore the ignal
	{
		printf("sigint failed\n");
		exit(0);
	}*/

	while(1)
	{
		//infinit loop
	}
}

