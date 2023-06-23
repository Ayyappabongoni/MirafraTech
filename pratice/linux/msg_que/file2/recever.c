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
	struct message msg[3];
	int id=10,i=0,mid,x;
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/msg_que/file2";
	int key=ftok(PATH,id);//token
	if(key==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}
	printf("ftok-%d\n",key);
	mid=msgget(key,0666|IPC_CREAT);//creation
	if(mid==-1)
	{
		printf("creation failed\n");
		exit(0);
	}

	for(i=0;i<3;i++)
	{
		//x=msgrcv(mid,&msg[i],sizeof(msg),0,0);//receving
		x=msgrcv(mid,&msg[i],sizeof(msg),0,0);
		if(x==-1)
		{
			printf("receve failed\n");
			exit(0);
		}
	}
	printf("receved from memory \nthe data is :-\n");
	for(i=0;i<3;i++)
	{
		printf("%ld %s\n",msg[i].a,msg[i].s);
	}
	msgctl(mid,IPC_RMID,NULL);//deleting 
}
