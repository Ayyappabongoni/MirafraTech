#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd=open("file.txt",O_RDONLY);
	if(fd==-1)
	{
		printf("open fail\n");
	}
	else
	{
		int fd2=open("file2.txt",O_WRONLY | O_CREAT,S_IRUSR | S_IWUSR);
		if(fd2==-1)
		{
			printf("second open fail\n");
		}
		else
		{	char s[50];
			int x=read(fd,s,sizeof(s));
			write(fd2,s,x);
		}
		close(fd);
		close(fd2);
	}
}
