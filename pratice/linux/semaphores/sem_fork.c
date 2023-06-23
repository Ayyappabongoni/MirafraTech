#include<unistd.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include<stdio.h>
#include<stdlib.h>


int main()
{
	sem_t *sem_ptr=NULL;
	int sval;//store semaphores value

	sem_ptr=sem_open("/sem1",O_CREAT|O_EXCL,0666,1);
	if(sem_ptr==SEM_FAILED)
	{
		printf("sem_open fail\n");
		exit(0);
	}

	int pid=fork();
	if(pid==-1)
	{
		printf("fork failed\n");
		exit(0);
	}

	if(pid==0)
	{
		printf("this is child process\n");

		sem_t *ptr=sem_open("/sem1",0);//open
		if(ptr==SEM_FAILED)
		{
			printf("sem_open fail\n");
			exit(0);
		}

		sem_getvalue(ptr,&sval);

		printf("before wait sem value is (%d)\n",sval);
		sem_wait(ptr);//lock
		sem_getvalue(ptr,&sval);
		printf("after wait sem value is (%d)\n",sval);

		printf("entering into critical section....\n");
		sleep(5);
		printf("exiting from critical sectin...\n");
		sem_post(ptr);//unlock
		sem_getvalue(ptr,&sval);
		printf("after post sem value is (%d)\n",sval);
		//printf("exiting from critical sectin...\n");
		sem_close(ptr);//close
	}

	else
	{

		printf("this is parent process\n");
		sem_getvalue(sem_ptr,&sval);
		printf("before wait sem value is (%d)\n",sval);
		sem_wait(sem_ptr);//lock
		sem_getvalue(sem_ptr,&sval);
		printf("after wait sem value is (%d)\n",sval);

		printf("entering into critical section.....\n");
		sleep(5);
		sem_post(sem_ptr);//unlock
		sem_getvalue(sem_ptr,&sval);
		printf("after post sem value is (%d)\n",sval);
		printf("exiting from critical sectin...\n");
		sem_close(sem_ptr);//close
	}
	sem_unlink("sem1");//deleting the semhaphores

}
