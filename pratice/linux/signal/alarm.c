#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>

void signal_handler(int signo)
{
	printf("alaram is happining\n");

//	signal(SIGALRM,SIG_IGN);//ignoring the signal
//	signal(SIGALRM,SIG_DFL);//default action

	alarm(2);
}

int main()
{
	signal(SIGALRM,signal_handler);
	alarm(2);
	while(1);
}
