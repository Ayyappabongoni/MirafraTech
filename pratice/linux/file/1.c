#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	char s[]="my name is ayyappa bongoni am from karimnagar";

	int fd=open("file.txt",O_WRONLY | O_CREAT);
	if(fd==-1)
	{
		printf("open fail\n");
	}
	else
	{
		int y=write(fd,s,sizeof(s));
	}
	close(fd);
}
