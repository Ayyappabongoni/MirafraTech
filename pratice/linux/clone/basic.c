#define _GNU_SOURCE
#include <sched.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<string.h>
#define size (4 * 1024)

int function(void *arg)
{
	printf("child\n");
		char *p=(char *)arg;
//		sleep(10);
	//printf("entered into child %s\n",(char*)arg);
	//char *p = "hello";
	printf("entered into child %s\n",p);
	return 0;
}

int main()
{
	char *p=(char*)malloc(sizeof(char)*size);
	if(p==NULL)
	{
		perror("malloc");
		exit(0);
	}
	char *val="hello world";
//	strcpy(val,"hello world");
//	printf("%s\n",val);
	pid_t x=clone(function,p+size,0,val);
	if(x<0)
	{
		perror("clone");
		exit(0);
	}
	printf("pid of child is %d\n",x);

	printf("this is parent\n");
	//free(p);
}
