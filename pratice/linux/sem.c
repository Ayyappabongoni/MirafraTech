#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>

int main()
{
	sem_t *sem_ptr=sem_open("sem1",O_CREAT|O_RDWR,0,1);

	int x=fork();
	if(x==0)
	{
		printf("this ios child\n");
		sem_wait(sem_ptr);//lock
		printf("entering child critical section\n");
		printf("exiting child section\n");
		sem_post(sem_ptr);
	}
	else{
		sleep(10);
		printf("this is parent\n");
		sem_wait(sem_ptr);
		printf("entering parent critical section\n");
		printf("exiting parent section\n");
		sem_post(sem_ptr);
	}
	sem_unlink("sem1");


}
