// program between releated process


#include <sys/wait.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <unistd.h>

struct message
{
	long int a;
	char s[100];
};
int main()
{
	struct message send_msg;
	struct message receve_msg;

	int mid=msgget(10,0666|IPC_CREAT);//creation
	if(mid==-1)
	{
		printf("creation failed\n");
		exit(0);
	}
	printf("creation sucessfull\n");

	int pid=fork();
	if(pid==-1)
	{
		printf("fork failed\n");
		exit(0);
	}

	if(pid==0)
	{
		printf("this is child\n");
		printf("enter the data to send\n");
		scanf("%ld %s",&send_msg.a,send_msg.s);
		int y=msgsnd(mid,&send_msg,sizeof(send_msg),0);//sending the data
		if(y==0)
		{
			printf("data sent to memory\n");
		}
		exit(0);	
	}
	else
	{
		int status;
		wait(&status);
		printf("this is parent\n");
		int x=msgrcv(mid,&receve_msg,sizeof(receve_msg),0,0);//receve data
		if(x>0)
		{
			printf("data recevied sucessfully\n");
			printf("%ld %s\n",receve_msg.a,receve_msg.s);
			msgctl(mid,IPC_RMID,NULL);
		}
	}
}
