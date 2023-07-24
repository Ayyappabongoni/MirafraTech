#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
	char buffer[30];
	int fd=open("/dev/MUTEX",O_RDONLY);
	if(fd==-1){
		printf("open failed\n");
		exit(0);
	}

	int x=read(fd,buffer,sizeof(buffer));
	if(x==-1)
	{
		printf("write failed\n");
	}
	else{
		printf("read sucessfull...\n%s\n",buffer);
	}

	close(fd);
}

