#include<unistd.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	sem_t *s_ptr=NULL;
	int sval;

	s_ptr=sem_open("/_sem_",O_RDWR);
	if(s_ptr==SEM_FAILED)
	{
		printf("sem open failed\n");
		exit(0);
	}

	sem_getvalue(s_ptr,&sval);
	printf("before wait sem value is (%d)\n",sval);
	sem_wait(s_ptr);
	sem_getvalue(s_ptr,&sval);
	printf("after wait sem value is (%d)\n",sval);
	printf("entering the critical section\n");
	for(int i=10;i<20;i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
	sem_post(s_ptr);
	sem_getvalue(s_ptr,&sval);
	printf("after post sem value is (%d)\n",sval);
	sem_post(s_ptr);
	sleep(10);
	sem_wait(s_ptr);
	for(int i=10;i<20;i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
	sem_post(s_ptr);
	sem_unlink("_sem_");
}
