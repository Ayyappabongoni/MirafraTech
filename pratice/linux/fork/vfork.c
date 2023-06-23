/*the vfork function is used to create a new child process.
The child process shares the same address space as the parent process until it calls either exec or _exit.*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int a=10;
	int x=vfork();
	//int a=10;
	if(x<0)
	{
		printf("vfork failed\n");
	}

	if(x==0)
	{
		a+=5;
		printf("this is child and value is %d\n",a);
		printf("child pid %d\n",(int)getpid());
		exit(0);
	}
	else
	{
		printf("this is parent and value is %d\n",a);
		printf("parent pid %d\n",(int)getppid());
	}
}
