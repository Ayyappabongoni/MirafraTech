#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *function(void *s)
{
	int i=0;
	char *ss=(char *)s;
	printf("%s\n",ss);
	for(i=0;ss[i]!=0;i++)
	{
		ss[i]='a';
	}
	pthread_exit(ss);
}

int main()
{
	pthread_t thread1;
	char s[20]="hello world";
	int x=pthread_create(&thread1,0,function,s);//s argument 
	if(x!=0)
	{
		printf("thread creation is failed\n");
		exit(1);
	}
	void *p;
	int y=pthread_join(thread1,&p);//p to store result
	if(y!=0)
	{
		printf("retyrn failed\n");
		exit(1);
	}

	printf("the return value is \n %s\n",(char *)p);
}
