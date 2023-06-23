#include<unistd.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <semaphore.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	sem_t *ptr=NULL;
	int sval;

	ptr=sem_open("/_sem_",O_CREAT|O_EXCL,0666,1);
	if(ptr==SEM_FAILED)
	{
		printf("open failed\n");
		exit(0);
	}
	sem_getvalue(ptr,&sval);
	printf("before wait sem value is (%d)\n",sval);
	sem_wait(ptr);
	sem_getvalue(ptr,&sval);
	printf("after wait sem value is (%d)\n",sval);
	printf("performing the critical section\n");
	for(int i=0;i<10;i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
	sem_post(ptr);
	sem_getvalue(ptr,&sval);
	printf("after post sem value is (%d)\n",sval);
	sleep(10);
	sem_wait(ptr);
	for(int i=20;i>10;i--)
	{
		printf("%d\n",i);
		sleep(1);
	}
	sem_post(ptr);
	sem_close(ptr);
}
