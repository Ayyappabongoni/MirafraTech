#include <signal.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>

void signal_handler(int no)
{
	if(no==SIGALRM){
		printf("signal is happening\n");
	}
signal(SIGALRM,SIG_IGN);//ignoring the signal
//signal(SIGALRM,SIG_DFL);//default action
alarm(2);
}

int main()
{
	signal(SIGALRM,signal_handler);
	alarm(2);
	while(1);
}
