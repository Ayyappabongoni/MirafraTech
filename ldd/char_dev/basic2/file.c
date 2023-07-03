#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	int ret;
	char buff[100];
	int fd3,fd2;
	int fd=open("/dev/my_dev",O_RDWR);
	if(fd==-1)
	{
		printf("open is not success\n");
		exit(0);
	}
	fd2=write(fd,"Mirafra Technologies",30);
	if(fd2<0)
	{
		printf("writing is not done\n");
		exit(0);
	}
	fd3=read(fd,buff,30);
	if(fd3==-1)
	{
		printf("read is not done\n");
		exit(0);

	}
	close(fd);
}
