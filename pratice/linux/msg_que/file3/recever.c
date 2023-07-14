#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<stdlib.h>
struct xyz{
	int a;
	char b[25];
};
int main()
{
	char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/pratice/linux/msg_que/file3";
	struct xyz s;
	key_t key=ftok(path,10);
	if(key==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}
	int id=msgget(key,IPC_CREAT|0666);
	if(id==-1)
	{
		printf("msgget failed\n");
		exit(0);
	}
	int a=msgrcv(id,&s,sizeof(s),0,0);
	if(a==-1)
	{
		printf("msgsend failed\n");
		exit(0);
	}
	printf("receved data is \n%d\n%s\n",s.a,s.b);
//getchar();
	int y=msgctl(id,IPC_RMID,NULL);
	if(y==-1)
	{
		perror("msgctl failed\n");
		exit(0);
	}
}

