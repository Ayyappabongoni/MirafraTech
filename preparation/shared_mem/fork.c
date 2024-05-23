#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <errno.h>
#include <string.h>

int main()
{
/*	key_t key=ftok("/home/km/kmmt01esd01/Mirafra2/MirafraTech/preparation/shared_mem",17);
{
		perror("key failed\n");
		exit(0);
	}
*/
	int id=shmget(10,1024,IPC_CREAT|0666);
	char *p=(char *)shmat(id,NULL,0);

	int x=fork();
	if(x<0)
	{
		perror("fork failed\n");
		exit(0);
	}

	if(x==0)
	{
		printf("thsi is child\n");
//		printf("enter the data to write\n");
//		scanf("%[^\n]s",p);
		strcpy(p,"this is ayyappa bongoni");	
		shmdt(p);//detach
		sleep(5);
		exit(0);
	}
	else
	{
		int a;
		wait(&a);
		printf("thsi is parent\n");
		printf("receved data is \n%s\n",p);
		shmctl(id,IPC_RMID,0);//delete
		printf("parent exiting\n");
	}
}
