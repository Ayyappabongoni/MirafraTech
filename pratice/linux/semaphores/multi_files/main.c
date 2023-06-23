#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>

sem_t *sem_ptr;
int key;
int main()
{
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/semaphores/multi_files";
	int id=10;
	sem_ptr=sem_open("/s8",O_CREAT|O_EXCL,0666,1);//sem creation
	if(sem_ptr==SEM_FAILED)
	{
		printf("sem open failed\n");
		exit(0);
	}

	key=ftok(PATH,id);//ftok
	if(key==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}

	int shm_id=shmget(key,1024,0666|IPC_CREAT);//shared memory creation
	if(shm_id==-1)
	{
		printf("sham creation failed\n");
		exit(0);
	}

	char *shm_ptr=shmat(shm_id,NULL,0);//attach shared memory
	if(shm_ptr==((char *)-1) )
	{
		printf("shm attach failed\n");
		exit(0);
	}
	printf("attach sucessfull\n");
	printf("enter the data \n");
	scanf("%[^\n]s",shm_ptr);//writing data in shared memory
	printf("data is :-\n%s\n",shm_ptr);
	int y=shmdt(shm_ptr);//detach shared mewmory
	if(y==-1)
	{
		printf("detach failed\n");
		exit(0);
	}
	printf("shm detach sucessfull\nexit from main\n");
}
