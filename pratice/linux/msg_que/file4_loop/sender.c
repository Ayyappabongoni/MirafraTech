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
{	int i=0,a=0;
	char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/pratice/linux/msg_que/file3";
	struct xyz s[3]={
		{1,"mirafra"},
		{2,"technologies"},
		{3,"hyderabad"}
	};
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
	for(i=0;i<3;i++){
		a=msgsnd(id,&s[i],sizeof(s[i]),0);
		if(a==-1)
		{
			printf("msgsend failed\n");
			exit(0);
		}
	}
/*	int y=msgctl(id,IPC_RMID,0);
	if(y==-1)
	{
		perror("msgctl failed\n");
		exit(0);
	}
*/
}

