#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include <pthread.h>
#include<unistd.h>
pthread_mutex_t mutex;
void *function(void *ptr);
int main()
{

	pthread_t t1,t2;
	int x=pthread_mutex_init(&mutex,NULL);//mutex creation
	if(x==-1)
	{
		printf("mutex failed\n");
		exit(0);
	}

	int A=pthread_create(&t1,NULL,function,"thread1");//thread1
	if(A==-1)
	{
		printf("thread1 failed\n");
		exit(0);
	}
	int B=pthread_create(&t2,NULL,function,"thread2");//thread2
	if(B==-1)
	{
		printf("thread2 failed\n");
		exit(0);
	}
	void *fval;
	int c=pthread_join(t1,&fval);
	if(c==-1)
	{
		printf("join 1 fail\n");
		exit(0);
	}
	int d=pthread_join(t2,&fval);
	if(d==-1)
	{
		printf("join 1 fail\n");
		exit(0);
	}
	 pthread_mutex_destroy(&mutex);
}

void *function(void *ptr)
{
	char *p=(char *)ptr;
	printf("%s is running\n",p);
	pthread_mutex_lock(&mutex);//lock
	for(int i=0;i<10;i++)
	{
		printf("%d\n",i);
	}
	pthread_mutex_unlock(&mutex);//
	pthread_exit("0");
}
