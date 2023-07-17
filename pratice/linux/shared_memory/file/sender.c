#include <sys/types.h>
#include <sys/ipc.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/pratice/linux/shared_memory/file";
	int id=ftok(path,10);
	if(id==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}
	//creat shm 
	int shm_id=shmget(id,1024,IPC_CREAT|0666);
	if(shm_id==-1)
	{
		printf("shmget failed\n");
		exit(0);
	}
	//attach shm
	void *p=shmat(shm_id,NULL,0);
		if((char *)p=="-1")
		{
			printf("shmat is failed\n");
		}
	//writing data in shm
	strcpy((char*)p,"Mirafar technologies");
	printf("send adata is \n%s\n",(char *)p);
shmdt(p);
	//removing shm
/*	int y=shmctl(shm_id,IPC_RMID,p);
	if(y==-1)
	{
		printf("shmctl failed\n");
		exit(0);
	}
*/
}
