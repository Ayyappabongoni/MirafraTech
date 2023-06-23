#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>


void signal_handler(int signo)
{
	if(signo==SIGUSR1)
	{
		printf("sigusr1 cought doing the actions\n");
		for(int i=0;i<10;i++)
		{
			printf("usr1 action is happining -%d\n",i);
			sleep(2);
		}
		printf("usr1 task is completed\n");
		exit(0);
	}

	if(signo==SIGUSR2)
	{
		printf("sigusr2 cought doing the actions\n");
		for(int i=0;i<10;i++)
		{
			printf("usr2 action is happining -%d\n",i);
			sleep(2);

		}
		printf("usr2 task is completed\n");
		exit(0);
	}
}




int main()
{
	printf("process id is  %d\n",getpid());

	if(signal(SIGUSR1,signal_handler)==SIG_ERR)//10
	{
		printf("usr1 signal failed\n");
		exit(0);
	}
	if(signal(SIGUSR2,signal_handler)==SIG_ERR)//12
	{
		printf("usr2 signal failed\n");
		exit(0);
	}

	while(1)
	{
		//ating for signals
	}
}
