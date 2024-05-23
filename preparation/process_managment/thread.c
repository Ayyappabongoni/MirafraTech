#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *function(void *p)
{
	printf("function %s\n",(char *)p);
	char *s="technologies";
	pthread_exit(s);
}

int main()
{
	pthread_t thread;

	char *s="mirafra";
//	char *s=(char *)malloc(10*sizeof(char));
//	s="mirafra";
	pthread_create(&thread,0,function,s);
	void *p;
	pthread_join(thread,&p);
	printf("return value %s",(char *)p);
}
