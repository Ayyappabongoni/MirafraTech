#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>


void signal_handler(int sig_no)
{

	if(sig_no==SIGINT)
	{
		printf("sigint cought\n");
		exit(0);
	}
}

int main()
{
	printf("process id is (%d),\n",getpid());

	if( signal(SIGINT,signal_handler) ==SIG_ERR)
	{
		printf("sending signal failed\n");
		exit(0);
	}

	while(1)//infinite loop
{

}
}
