#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

#define PATH "myfifo"
int main()
{
	char buffer[]="this is my program for named pipes";
	int fd=open(PATH,O_WRONLY);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}
	write(fd,buffer,strlen(buffer)+1);
	close(fd);
}


