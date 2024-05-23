/*If the child process terminates well before parent terminates then the child process 
is not removed from the PROCESS TABLE.  These are called as ZOMBIES.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
	int x=fork();

	if(x<0)
	{
		printf("fork failed\n");
	}

	if(x==0)
	{
		printf("this is child %d with parent id %d\n",(int)getpid(),(int)getppid());
	}
	else
	{
		sleep(10);
		printf("this is parent %d with parent's parent %d\n",(int)getpid(),(int)getppid());
	}
}

/*int main()
{
	int pid=fork();

	if(pid==0)
	{
		printf("this is child\n");
	}
	else
	{
		getchar();
		printf("this is parent\n");
	}
}*/
