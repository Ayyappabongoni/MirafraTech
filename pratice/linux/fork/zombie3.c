#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid<0)
	{
		printf("fork is failed\n");
	}

          if (pid==0)
	  {
	 	      printf("I am a child process\n");
	         	      printf("Child process ID : %d \n", getpid());
	         	      printf("Child's Parent process ID : %d ",getppid());
	   }
  
        else
         {
                   getchar();
	 	    printf("I am a parent process\n");
		    printf("Parent process ID : %d \n",getpid());
		    printf("Parent's parent ID(Shell id) : %d\n",getppid());
 	  }
}

