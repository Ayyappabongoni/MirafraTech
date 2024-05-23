#define _GNU_SOURCE
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<sched.h>
//#include <sys/types.h>
//#include <sys/wait.h>

#define size (1024*4)

int fun(void *p)
{
	char *s=(char *)p;
	printf("thsi is fun\n");
	printf("receved data is \n%s\n",s);
	printf("exiting.....\n");
	return 0;
}
int main()
{
	char *p=(char *)malloc(sizeof(char)*size);
	char s[20]="kernel masters";
	pid_t x=clone(fun,p+size,0,s);
	if(x<0)
	{
		perror("clone failed\n");
		exit(0);
	}
		printf("pid of childis %d\n",x);
		printf("this is main process\n");

}
