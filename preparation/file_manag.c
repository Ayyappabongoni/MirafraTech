#include <errno.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
	char s[20]="hello world";
	char a[20];
	int fd=open("hello.txt",O_RDWR | O_CREAT);
	//int fd=open("hello.txt",O_RDWR | O_CREAT,S_IRUSR | S_IWUSR);
	if(fd<0)
	{
		printf("open failed");
		exit(0);
	}

	int x=write(fd,s,sizeof(s));
	if(x<0)
	{
		printf("write is failed\n");
		exit(0);
	}
	lseek(fd,0,SEEK_SET);
	int y=read(fd,a,10);
	if(y==-1)
	{
		perror("read is failed\n");
		exit(0);
	}
	printf("%s",a);
	close(fd);
}
