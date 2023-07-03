#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
	char buffer[50];
	char s[]="Mirafra Technologies Hyderabad";
	int fd=open("/dev/HALF_STRING",O_RDWR);
	if(fd==-1){
		printf("open failed\n");
		exit(0);
	}

	int x=write(fd,s,sizeof(s));
	if(x==-1)
	{
		printf("write failed\n");
	}

	int a=lseek(fd,8,SEEK_SET);
	if(a==-1)
	{
		printf("lseek failed\n");
	}
	
	int y=read(fd,buffer,25);
	if(y==-1)
	{
		printf("write failed\n");
	}
	printf("%s\n",buffer);
	close(fd);
}

