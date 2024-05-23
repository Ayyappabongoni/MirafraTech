#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{

	int id=shmget(100,0,0666|IPC_CREAT);

	char *p=shmat(id,NULL,SHM_RDONLY);
	printf("receved data is %s\n",p);
	shmdt(p);
	shmctl(id,IPC_RMID,NULL);
}

