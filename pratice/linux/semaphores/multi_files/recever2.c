#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>

sem_t *sem_ptr=NULL;
int main()
{
	char *PATH="/home/km/kmmt01esd01/MirafraTech/pratice/linux/semaphores/multi_files";
	int id=10;
	int x=ftok(PATH,id);//ftok
	if(x==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}

	int shm_id=shmget(x,1024,0666);//shm creation
	if(shm_id==-1)
	{
		printf("shmget failed\n");
		exit(0);
	}
	printf("shmget sucessfull\n");
	sem_ptr=sem_open("/s8",O_RDWR);//sem open
	if(sem_ptr==SEM_FAILED)
	{
		printf("sem open fail\n");
		exit(0);
	}
	printf("sem open sucessfull\n");
	sem_wait(sem_ptr);//lock

	char *shm_ptr=shmat(shm_id,NULL,SHM_RDONLY);//attach
	if(shm_ptr==((char *)-1))
	{
		printf("shm attach failed\n");
		exit(0);
	}
	printf("reading the data\nthe data is :-%s\n",shm_ptr);//reading data
	int y= shmdt(shm_ptr);//detach shm
	if(y==-1)
	{
		printf("detach failed\n");
		exit(0);
	}
	sem_post(sem_ptr);//unlock
	sem_unlink("sem7");
}

