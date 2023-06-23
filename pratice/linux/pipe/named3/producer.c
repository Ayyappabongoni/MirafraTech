#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<pthread.h>

int mystrlen(char *p);
void *function(void *p);
int main()
{
	pthread_t thread1;
	char s[]="this is pipe using threads";
	int x=pthread_create(&thread1,0,function,&s);
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
	printf("%s\n",(char *)a);

}

void *function(void *p)
{
	char *s=(char *)p;
	int c=mystrlen(s);
	int fd=open("fifo",O_WRONLY);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}
	write(fd,s,c);
	close(fd);
	char *a="written into fifo";
	pthread_exit(a);
}

int mystrlen(char *p)
{
	int i=0,c=0;
	for(i=0;p[i]!=0;i++)
	{
		c++;
	}
	c=c+1;
	return c;
}
