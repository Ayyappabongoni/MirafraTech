#include <sys/types.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <semaphore.h>
#include <pthread.h>
char shared[4]="abc";
int main()
{
	sem_t sem;
	int x=sem_init(&sem,0,1);
	int pid=vfork();
	if(pid==0)
	{
		sem_wait(&sem);
		printf("this is child\n");
		shared[0]='x';
		printf("child exiting\n");
		sem_post(&sem);
		exit(0);
	}
	else
	{
		sem_wait(&sem);
		printf("this is parent\n");
		shared[1]='y';
		printf("parent is exiting\n");
		sem_post(&sem);
		wait(NULL);
	}
	printf("%s\n",shared);
	return 0;
}
