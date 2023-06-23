#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/shm.h>

#define SIZE 1024
int main()
{
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/shared_memory";
	int id=10;
	int key=ftok(PATH,id);
	if(key==-1)
	{
		printf("ftok is failed\n");
		exit(0);
	}

	int shm_id=shmget(key,SIZE,0666|IPC_CREAT);//creating shm
	if(shm_id==-1)
	{
		printf("memory reation failed\n");
		exit(0);
	}

	char *shm_address=shmat(shm_id,NULL,0);//attaching process to shmg
	if(shm_address==( (char *)-1))
	{
		printf("attach failed\n");
		exit(0);
	}
	printf("enter the string\n");
	scanf("%[^\n]s",shm_address);//writing data to memory
	printf("written data is:-\n%s\n",shm_address);

	int x=shmdt(shm_address);//removing process from shmg
	if(x==-1)
	{
		printf("detach failed\n");
		exit(0);
	}
	printf("detach complete\n");
}
