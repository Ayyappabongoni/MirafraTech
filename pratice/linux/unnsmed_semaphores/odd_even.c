#include <semaphore.h>
#include <pthread.h>
#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
int x=0;
void *even(void *arg);
void *odd(void *arg);
sem_t sem;//sem var
int main()
{
	pthread_t t1,t2;

	int a=sem_init(&sem,0,1);//sem creation
	if(a==-1)
	{
		printf("sem creation failed\n");
		exit(0);
	}

	int b=pthread_create(&t1,NULL,even,NULL);//t1
	if(b==-1)
	{
		printf("t1 failed\n");
		exit(0);
	}
	int c=pthread_create(&t2,NULL,odd,NULL);//t2
	if(c==-1)	
	{
		printf("t2 failed\n");
		exit(0);
	}

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
	sem_destroy(&sem);
	printf("sem destroyed\n");
}

void *even(void *arg)
{
	int i=0;
	for(i=0;i<10;i++)
	{
		sem_wait(&sem);
		if(x%2==0)
		{
			printf("%d is even\n",x);
			x++;
		}
		sem_post(&sem);
		sleep(3);
	}
	pthread_exit(NULL);

}

void *odd(void *arg)
{
	int i=0;
	for(i=0;i<10;i++)
	{
		sem_wait(&sem);
		if(x%2!=0)
		{
			printf("%d is odd\n",x);
			x++;
		}
		sem_post(&sem);
		sleep(3);
	}
	pthread_exit(NULL);
}
