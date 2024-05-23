#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<pthread.h>

int main()
{
	int a=1;
	pthread_mutex_t m;
	pthread_mutex_init(&m,NULL);//insalize
	int x=fork();
	if(x==0)
	{
		pthread_mutex_lock(&m);//lock
		printf("this is child\n");
		int i=0;
		for(i=0;i<10;i++)
		{
			printf("%d\n",a);
			a++;
		}
		pthread_mutex_unlock(&m);//unlock
	}
	else
	{
		pthread_mutex_lock(&m);//lock
		printf("this is parent\n");
		int i=0;
		for(i=0;i<10;i++)
		{
			printf("%d\n",a);
			a++;
		}
		pthread_mutex_unlock(&m);//unlock
	}
	if(x<0)
	{
		printf("fork failed\n");
		exit(0);
	}
	pthread_mutex_destroy(&m);

}

