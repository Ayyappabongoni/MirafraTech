#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/shm.h>
int main()
{
	char *path="/home/km/kmmt01esd01/Mirafra2/MirafraTech/pratice/linux/shared_memory/file";

	int f_id=ftok(path,10);
	if(f_id==-1)
	{
		printf("ftok failed\n");
		exit(0);
	}
	int shm_id=shmget(f_id,1024,0666);
	if(shm_id==-1){
		printf("shmgetb failed\n");
		exit(0);
	}
//attach shm
	void *s=(char *)shmat(shm_id,NULL,0);
	if((char *)s=="-1")
	{
		printf("shmat failed\n");
		exit(0);
	}//print data
	printf("recever data is\n%s\n",(char *)s);
	//detach
	int x=shmdt(s);
	if(x==-1)
	{
		printf("shmctl failed\n");
		exit(0);
	}

/*int y=shmctl(shm_id,IPC_RMID,s);
if(y==-1)
{
        printf("shmctl failed\n");
        exit(0);
}
*/

}

