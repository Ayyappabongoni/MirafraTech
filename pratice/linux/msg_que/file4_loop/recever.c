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
	int i=0,a=0;
	char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/pratice/linux/msg_que/file3";
	struct xyz s[3];
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
		a=msgrcv(id,&s[i],sizeof(s[i]),0,0);
		if(a==-1)
		{
			printf("msgrec failed\n");
			exit(0);
		}
	}
	for(i=0;i<3;i++){
		printf("i=%d\nreceved data is \n%d\n%s\n",i,s[i].a,s[i].b);
	}
	int y=msgctl(id,IPC_RMID,NULL);
	if(y==-1)
	{
		perror("msgctl failed\n");
		exit(0);
	}
}
