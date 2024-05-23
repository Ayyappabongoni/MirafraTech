#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
int main()
{
	char s[]="mirafra technoogiers";
	char *p;
	int fd;
	if(fd=open("/dev/ABHI",O_RDWR)<0)
	{
		perror("openfail\n");
	}
	if(write(fd,s,strlen(s))<0)
		perror("write fail\n");
	if(read(fd,p,strlen(s))<0)
		perror("read fail\n");
	close(fd);
	printf("receved data is %s\n",p);
}
