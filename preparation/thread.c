#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
void *function(void *p);
int main()
{
pthread_t p;
	void *pp;
	char s[20]="hello wolrld\n";
	int x=pthread_create(&p,0,function,s);
	if(x!=0)
	{
		perror("create failed\n");
		exit(0);
	}	
	int y=pthread_join(p,&pp);
	if(y!=0)
	{
		perror("join failed\n");
		exit(0);
}
		printf("return data is \n%s\n",(char *)pp);
}
void *function(void *p)
{
	printf("this is thread function receved data is \n%s\n",(char *)p);
	printf("returning to main thread\n");
	char *s="abhi bongoni";
	pthread_exit(s);
}
