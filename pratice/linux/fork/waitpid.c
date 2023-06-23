/*pid_t waitpid ( int pid, int *status, int options) 
waitpid functions suspends execution of the current process until 
a child as specified by the pid argument has exited or until a signal is delivered 
whose action is to terminate the current process or to call a signal handling function.
*/


#include <sys/types.h>
#include <sys/wait.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	int x=fork();
	if(x<0)
	{
		printf("fork is failed\n");
	}
	if(x==0)
	{
		printf("this is child running....\n");
		sleep(3);
		printf("child execting\n");
		return 99;
	}
	else
	{
		int status;
		waitpid(x,&status,0);
		printf("parent process wating for child...\n");
		printf("the return value is %d\n",WEXITSTATUS(status));
	}
}





    
