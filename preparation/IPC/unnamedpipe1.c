#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/wait.h>
/*
0 read
1 write
2 error
*/
int main()
{
	int fd[2];
	if(pipe(fd)<0)
	{
		printf("pipe failed\n");
		exit(0);
	}
	int x=fork();
	if(x==0)
	{
		printf("this is child\n");
		close(fd[0]);//close read
		write(fd[1],"ABHI",strlen("ABHI"));
		close(fd[1]);
		exit(1);
	}
	else{int a;
		wait(&a);
		char s[10];
		close(fd[1]);
		printf("this is parent\n");
		read(fd[0],s,sizeof(s));
		close(fd[0]);
		printf("%s\n",s);
	}
return 0;
}

