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
	int id=10,key;
	key=ftok(PATH,id);
	if(key==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}

	int shm_id=shmget(key,SIZE,0666|IPC_CREAT);//creating
	if(shm_id==-1)
	{
		printf("creation failed\n");
		exit(0);
	}

	char *shm_address=shmat(shm_id,NULL,SHM_RDONLY);//attaching
	if(shm_address==(char *)-1)
	{
		printf("receve failed\n");
		exit(0);
	}
	printf("the data receved from memory is\n%s\n",shm_address);

	int x=shmdt(shm_address);//detaching
	if(x==-1)
	{
		printf("detach failed\n");
		exit(0);
	}

	int y=shmctl(shm_id,IPC_RMID,NULL);//deleting shm segment
	if(y==-1)
	{
		printf("shmctl faild\n");
		exit(0);
	}
}
