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
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/msg_que";
	int id=123;
	struct message msg={123,"kernel masters is the only inistitute"};

	int key=ftok(PATH,id);//key_t ftok(const char *pathname, int proj_id);
	if(key==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}
	printf("ftok= %d\n",key);

	int msgq_id=msgget(key,0666|IPC_CREAT);//creating the msg queue store the key in msgq_id
	if(msgq_id==-1)
	{
		printf("creation failed\n");
		exit(0);
	}
	else
	{
		printf("creation sucessfull\n");

		int x=msgsnd(msgq_id,&msg,sizeof(msg),0);//data sending
		if(x==-1)
		{
			printf("send failed\n");
			exit(0);
		}
		else
		{
			printf("data send to msg queue\n");
		}
	}
}
