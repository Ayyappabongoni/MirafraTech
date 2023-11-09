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

void master_handler(int no);
void return_handler(int no);
void init_handler(int no);
void BUS_handler(int no);

int pid=0,fd=0;
char ch;
int main()
{int a=0;

	printf("pid of master (%d)\n",getpid());
	printf("choose slave 1/2/3\n");
	scanf("%d",&a);
	switch(a){
		case 1:
			//start acknowledgement
			printf("plz enter pid of slave1\n");
			scanf("%d",&pid);
			kill(pid,SIGALRM);

			signal(SIGALRM,master_handler);
			signal(SIGINT,return_handler);
			while(1){}
			break;

		case 2:
			printf("plz enter pid of slave2\n");
			scanf("%d",&pid);
			kill(pid,SIGALRM);

			signal(SIGALRM,master_handler);
			signal(SIGCHLD,init_handler);
			while(1){}
			break;
		case 3:
			printf("plz enter pid of slave3\n");
			scanf("%d",&pid);
			kill(pid,SIGALRM);

			signal(SIGALRM,master_handler);
			signal(SIGBUS,BUS_handler);
			while(1){}
			break;

	}
	printf("do you want to conintue y/n \n");
	scanf(" %c",&ch);
	if(ch!='y'){
		return 0;
	}
	//	while(1){}
}

void master_handler(int no)
{
	if(no==SIGALRM)
	{
		printf("acknoledgement recevde from slave!!!!!!!\n");
		int shmid = shmget(123, sizeof(char)*60, IPC_CREAT | 0666);
		if(shmid<0)
		{
			perror("open failed\n");
			exit(1);
		}
		printf("writig data into slave.....\n");

		char *shared_memory = (char *)shmat(shmid, NULL, 0);//attach

		//		shared_memory="program with i2c signals and dhared memory";
		printf("enter data to send\n");
		scanf(" %[^\n]s",shared_memory);
		printf("data send to slave.....\n");

		int x=shmdt(shared_memory);//detach
		if(x==-1)
		{
			printf("detach failed\n");
			exit(0);
		}
		printf("detach complete\n");
		printf("fd closed\nsending ack to slave......");
		//sending signal data is ready
		kill(pid,SIGUSR1);
	}
}
void return_handler(int no)
{
	if(no==SIGINT)
		printf("ack receved from slave after reading...\n");
	main();
	exit(0);
}
void init_handler(int no)
{
	if(no==SIGCHLD)
		printf("ack receved from slave after reading...\n");
	main();
	exit(0);
}
void BUS_handler(int no)
{
	if(no==SIGBUS)
		printf("ack receved from slave after reading...\n");
	main();
	exit(0);
}
