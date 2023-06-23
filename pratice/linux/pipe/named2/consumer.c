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

	char buffer[50];
	int fd=open(PATH,O_RDONLY);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}
	printf("reading from fifo\n");
	int x=read(fd,buffer,sizeof(buffer));
	if(x>0)
	{
		printf("read from pip output is :-\n");
	}
	printf("%s\n",buffer);
	close(fd);
}
