/*After fork(), the time slice is given to parent process.  If the parent process terminates before the child process, then the child process becomes orphan process
  When parent terminates then the child process will come into the picture of init process
  For every orphan process init will become father
 */
#include<stdio.h>
#include<unistd.h>
int main()
{
	int x=fork();
	if(x==-1)
	{
		printf("fork failed\n");
	}

	if(x==0)
	{
		sleep(10);
		printf("this is chid with pid %d\n",(int)getpid());
		printf("this is chid parent with ppid %d\n",(int)getppid());
	}

	else
	{
		printf("this is parent with %d\n",(int)getpid());
		printf("this is parent's parent with ppid %d\n",(int)getppid());
	}
}
