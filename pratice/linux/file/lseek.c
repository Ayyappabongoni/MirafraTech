#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd=open("file.txt",O_RDONLY);//file 1
	if(fd==-1)
	{
		printf("open failed\n");
	}

	int fd2=open("file2.txt",O_WRONLY);//file2
	if(fd2==-1)
	{
		printf("2nd open failed\n");
	}

	int x=lseek(fd,10,SEEK_SET);//position in file1
	if(x==-1)
	{
		printf("lseek is failed\n");
	}
	char buffer[50];
	int a=read(fd,buffer,sizeof(buffer));//read from file1
	if(a==-1)
	{
		printf("read failed\n");
	}
	printf("size %d\n",a);
	int y=write(fd2,buffer,a);//write into file2
	close(fd);
	close(fd2);
}
