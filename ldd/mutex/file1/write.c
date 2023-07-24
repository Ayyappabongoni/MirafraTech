#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
	char buffer[30];
	char s[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int fd=open("/dev/MUTEX",O_RDWR);
	if(fd==-1){
		printf("open failed\n");
		exit(0);
	}

	int x=write(fd,s,sizeof(s));
	if(x==-1)
	{
		printf("write failed\n");
	}
	close(fd);
}

