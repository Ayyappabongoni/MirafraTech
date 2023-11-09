#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>

void signal_handler(int no);
void start_handler(int no);

	int pid=0;
int main()
{
	printf("pid of slave1 (%d)\n",getpid());


		signal(SIGALRM,start_handler);
		signal(SIGUSR1,signal_handler);

		while(1){}
}

void signal_handler(int no)
{int fd=0;
	char s[50];
	char ch;
	if(no==SIGUSR1)
	{
		printf("reading data from master......");

		int shmid = shmget(123, sizeof(char)*60, IPC_CREAT | 0666);
		if(shmid<0)
		{
			perror("open failed\n");
			exit(1);
		}
		printf("writig data into slave.....\n");

		char *shared_memory = (char *)shmat(shmid, NULL, 0);//attach

		printf("receved data is \n%s\n",shared_memory);

		int x=shmdt(shared_memory);//detach
		if(x==-1)
		{
			printf("detach failed\n");
			exit(0);
		}
		printf("detach complete\n");
		kill(pid,SIGINT);

		exit(1);
	}
}

void start_handler(int no)
{

	if(no==SIGALRM)
		printf("recevd start condition from master!!!!!\n");


	//return acknowledgement
	printf("plz enter pid to return ack\n");
	scanf("%d",&pid);
	kill(pid,SIGALRM);

}
