#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *function(void *p)
{
	int a=*(int*)p;
	int i=0;
	for(i=5;i>0;i--)
	{
		printf("%d\n",a);
	}
	char *s=(char *)malloc(20*sizeof(char *));
	s="kernel masters";
	printf("\n%s\n",s);	
	pthread_exit(s);
}

int main()
{
	int a=5;
	pthread_t thread1;
	int x=pthread_create(&thread1,NULL,function,&a);
	if(x!=0)
	{
		printf("thread creation is failed\n");
		exit(1);
	}
	void *p;
	int y=pthread_join(thread1,&p);
	if(y!=0)
	{
		printf("thread join is failed\n");
		exit(1);
	}
	printf("return is \n%s\n",(char *)p);
}
