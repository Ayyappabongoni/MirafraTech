#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>


int main()
{
	char buffer[3][20];
	char *s[]={"Mirafra","Technologies","hyderabad"};
	int fd=open("/dev/MY_D",O_RDWR);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}

	for(int i=0;i<3;i++)
	{
		write(fd,s[i],strlen(s[i])+1);
	}

	for(int i=0;i<3;i++)
	{
		read(fd,buffer[i],sizeof(buffer[i]));
		printf("%s\n",buffer[i]);
	}
	close(fd);
}

