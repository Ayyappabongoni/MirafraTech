#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

void *function(void *p);
int main()
{
	pthread_t thread1;
	int x=pthread_create(&thread1,0,function,NULL);
	if(x!=0)
	{
		printf("thread creation failed\n");
		exit(0);
	}
	void *a;
	int y=pthread_join(thread1,&a);
	if(y!=0)
	{
		printf("join failed\n");
		exit(0);
	}

}

void *function(void *p)
{
	int fd=open("fifo",O_RDONLY);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}
	char buffer[50];
	read(fd,buffer,sizeof(buffer));
	close(fd);
	printf("reading from fifo output is :-\n");
	printf("%s\n",buffer);
	pthread_exit(NULL);
}

