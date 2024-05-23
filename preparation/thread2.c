#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
void * fun(void *p);
int main()
{
	pthread_t t1;
	int p=12;
	int x=pthread_create(&t1,0,fun,&p);
	if(x!=0)
	{
		perror("create failed");
		exit(0);
	}
	void *s;
	int y=pthread_join(t1,&s);
	if(y!=0)
	{
		perror("join failed");
		exit(0);

	}
	printf("%s\n",(char *)s);
}

void * fun(void *p)
{
int a=*((int *)p);
	printf("this is thead fun receved data is \n%d\n",a);
	printf("returning to main thread\n");
	char *pp="jbbwebvivbriue";
	pthread_exit(pp);
}
