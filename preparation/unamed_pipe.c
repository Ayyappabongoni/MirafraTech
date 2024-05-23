#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<errno.h>

int main()
{
	char s[20]="mirafra technologies";
	char a[20];
	int p[2];//pipes

	int x=pipe(p);
	if(x==-1)
	{
		perror("pipe failed\n");
		exit(0);
	}
	int y=fork();
	if(y<0)
	{
		perror("fork failed\n");
		exit(0);
	}

	if(y==0)
	{
		printf("this is child\n");
		close(p[0]);//close other side
		write(p[1],s,20);
		close(p[1]);
		sleep(5);
		exit(0);
	}
	else
	{int b;
		wait(&b);
		printf("thsi is parent\n");
		close(p[1]);
		read(p[0],a,20);
		close(p[0]);
		printf("receved data is\n%s\n",a);
	}
}
