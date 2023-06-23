#include <semaphore.h>
#include <pthread.h>
#include<stdio.h>
#include<stdlib.h>

void *function(void *ptr);
int x=0;//global var
sem_t sem;//sem var
int main()
{
	//sem_t sem;//sem var

	pthread_t t1,t2,t3;//creating three threads

	int y=sem_init(&sem,0,1);//creat sem 
	if(y==-1)
	{
		printf("sem_init failed\n");
		exit(0);
	}

	//creating threads

	int A=pthread_create(&t1,NULL,function,"thread1");//t1
	if(A==-1)
	{
		printf("thread1 creat failed\n");
		exit(0);
	}
	int B=pthread_create(&t2,NULL,function,"thread2");//t2
	if(B==-1)
	{
		printf("thread2 creat failed\n");
		exit(0);
	}
	int C=pthread_create(&t3,NULL,function,"thread3");//t3
	if(C==-1)
	{
		printf("thread3 creat failed\n");
		exit(0);
	}
	//thread join
	int a=pthread_join(t1,NULL);
	int b=pthread_join(t1,NULL);
	int c=pthread_join(t1,NULL);
	printf("3 threads process completed\nfinally the global value is %d\n",x);
	sem_destroy(&sem);
	printf("sem destroyed\n");
}

void *function(void *ptr)
{
	char *p=(char *)ptr;

	printf("running thread is %s\n",p);
	sem_wait(&sem);//lock
	for(int i=0;i<1000;i++)
	{
		x++;
	}
	sem_post(&sem);
	printf("%s is completed\n",p);
	pthread_exit(NULL);
}
