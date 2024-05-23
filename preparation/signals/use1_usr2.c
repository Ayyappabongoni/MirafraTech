#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>



void signal_handler(int no)
{
	if(no==SIGUSR1)
	{int i=0;
		printf("this is usr1\n");
		for(i=0;i<10;i++)
		{
			printf("usr 1 is happining %d\n",i);
		}
		printf("usr 1 completed\n");
		exit(0);
	}
	if(no==SIGUSR2)
	{int i=0;
		printf("this is usr2\n");
		for(i=0;i<10;i++)
		{
			printf("usr 2 is happining %d\n",i);
		}
		printf("usr 2 completed\n");
		exit(0);
	}
}
int main()
{
	printf("pid of process %d\n",getpid());
	signal(10,signal_handler);//10 usr1
	signal(12,signal_handler);//12 usr2
	//raise(SIGUSR1);//or kill -10 pid
	//raise(SIGUSR2);//or kill -12 pid
	raise(12);//or kill -12 pid
	while(1);

}
