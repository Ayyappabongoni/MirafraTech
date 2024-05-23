#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define size 1024
int main()
{
	int id=shmget(100,size,0666|IPC_CREAT);
	char *p=shmat(id,NULL,0);
	
	printf("enter data to send to shared memory\n");
	scanf("%s",p);
	shmdt(p);
}
