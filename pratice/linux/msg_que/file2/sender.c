#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/ipc.h>

struct message{
	long int a;
	char s[50];
};

int main()
{
	struct message msg[3] = {
		{1, "msg1"},
		{2, "msg2"},
		{3, "msg3"}
	};
	int i=0,key,id=10;
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/msg_que/file2";
	key=ftok(PATH,id);//token
	if(key==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}
	printf("ftok-%d\n",key);
	int mid=msgget(key,0666|IPC_CREAT);//creation
	if(mid==-1)
	{
		printf("creation failed\n");
		exit(0);
	}
	printf("creation sucessfull\n");

	for(i=0;i<3;i++)
	{
		int x=msgsnd(mid,(void*)&msg[i],strlen(msg[i].s)+1,0);//sending 
		if(x==-1)
		{
			printf("send failed\n");
		}
	}
		printf("send sucessfull\n");

}
