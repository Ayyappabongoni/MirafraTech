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
	char buffer[]="hjjhfvgvfljhvbhjvbcxvnbjfdhvbjdfhsb";
	int fd=open(PATH,O_WRONLY);
	if(fd==-1)
	{
		printf("open failed\n");
	}

	write(fd,buffer,strlen(buffer)+1);
	printf("written into fifo\n");
	close(fd);
}
