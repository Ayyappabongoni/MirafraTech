#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>


int main()
{
	char buffer[30];
	char s[]={"Mirafra Technologies hyderabad"};
	int fd=open("/dev/rev_string",O_RDWR);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}

		write(fd,s,strlen(s));

		read(fd,buffer,sizeof(buffer));
		printf("%s\n",buffer);
	close(fd);
}
