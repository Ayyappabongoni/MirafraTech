#include <sys/types.h>
#include <sys/ipc.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
struct abhi
{
	int a;
	char *p;
};

int main()
{//int key=100;

	key_t key=ftok("/home/km/kmmt01esd01/Mirafra2/MirafraTech/preparation/msg_que",777); 
	if(key<0)
	{
		perror("ftok failed\n");
		exit(0);
	}

	struct abhi A;
	struct abhi B;
	int msg_id=msgget(key,IPC_CREAT|0666);

	int x=fork();
	if(x<0)
	{
		perror("fork failed\n");
		exit(0);
	}
	if(x==0)
	{

		printf("this is child\n");
		A.a=100;
		A.p="ayyappa bongoni";
		int q=msgsnd(msg_id,&A,sizeof(A),0);
		printf("child exiting\n");
		sleep(5);
		exit(0);
	}
	else
	{int a;
		wait(&a);
		printf("this is parent\n");
		msgrcv(msg_id,&B,sizeof(B),0,0);
		printf("reved data is \n%d\n%s\n",B.a,B.p);
		printf("parent exiting\n");
		sleep(5);
		msgctl(msg_id,IPC_RMID,NULL);	
	}
}

