/*After the fork() call, both the parent and child processes continue executing from the point of the fork() call, 
but they have different execution contexts.
This means that any changes made to the data or stack segments in one process do not affect the other process.

Forking is a powerful technique used by many Linux programs to achieve parallelism, 
where multiple tasks are executed simultaneously. By creating a child process to perform a specific task, 
the parent process can continue executing other tasks while the child process runs in parallel.
 This allows programs to make better use of available system resources and increase overall performance.
*/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>

int i=0;
void function(char *p)
{
//int i=0;
	for(;i<5;i++)
	{
		sleep(2);
		printf("i is %d for %s\n",i,p);
	}
}
int main()
{
	int ret;
	ret=fork();
	if(ret<0)
	{
		printf("fork is faild\n");
	}
	printf("fork returned %d\n",ret);
	if(ret==0)
	{
		printf("this is child\n");
		printf("child pid id %d\n",(int)getpid());
		function("child");
		exit(0);
	}
	else if(ret>0){
		printf("this is parent \n");
		printf("parent pid id %d\n",(int)getppid());
		function("parent");
		wait(NULL);
	}
}
