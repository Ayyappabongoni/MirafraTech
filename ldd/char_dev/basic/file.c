#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
	char buffer[50];
	char s[20]="XXXXXXXXXXXXXX";
	int fd=open("/dev/AYYAPPA",O_RDWR);
	if(fd==-1){
		printf("open failed\n");
		exit(0);
	}

	int x=write(fd,"abhi",4);
	if(x==-1)
	{
		printf("write failed\n");
	}
	int y=read(fd,"buffer",4);
	if(y==-1)
	{
		printf("write failed\n");
	}
	close(fd);
	//printf("%s\n",buffer);
}
