#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/ipc.h>

struct message
{
	long int a;
	char s[100];
};

int main()
{
	struct message msg;
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/msg_que";
	int id=123;
	int key=ftok(PATH,id);//creat ftok
	if(key==-1)
	{
		printf("ftok is failed\n");
		exit(0);
	}

	int msgq_id=msgget(key,0666|IPC_CREAT);//creat recever
	if(msgq_id==-1){
		printf("msgget failed\n");
		exit(0);
	}
	else
	{
		int x=msgrcv(msgq_id,&msg,sizeof(msg),0,0);//receve from msg queue
		if(x==-1)
		{
			printf("receve fail\n");
			exit(0);
		}
		printf("receve sucessfull \n the data is \n");
		printf("%ld\n%s\n",msg.a,msg.s);


		//delete msg q
		msgctl(msgq_id,IPC_RMID,NULL);

	}
}

