#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdlib.h>
#include <stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{

	int fd[2],i=0;

	if( (pipe(fd))==-1 )
	{
		printf("pipe failed\n");
		exit(0);
	}

	int x=fork();
	if(x==-1)
	{
		printf("fork failed\n");
		exit(0);
	}

	if(x==0)//child
	{
		//char s[]="am a mirafra emply from hyd";
		close(fd[0]);//close other side
		for(i=0;i<argc;i++)
		{
		write(fd[1],argv[i],strlen(argv[i])+1);//size +null
		}
		close(fd[1]);
	}
	else
	{
		char buffer[100];
		close(fd[1]);
		for(i=0;i<argc;i++)
		{
		read(fd[0],buffer,sizeof(buffer));
		printf("%s\n",buffer);
		}	
		//printf("%s\n",buffer);
		close(fd[0]);
	}
}
