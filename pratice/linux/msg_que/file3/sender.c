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
	char s[25];
};

int main()
{
	char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/pratice/linux/msg_que/file3";
	struct xyz s1;
	s1.a=10;
	strcpy(s1.s,"kamal technologies");
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
	int a=msgsnd(id,&s1,sizeof(s1),0);
	if(a==-1)
	{
		printf("msgsend failed\n");
		exit(0);
	}
/*	int y=msgctl(id,IPC_RMID,0);
	if(y==-1)
	{
		perror("msgctl failed\n");
		exit(0);
	}
*/
}
