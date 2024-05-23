#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>


int main()
{
	char s[20];

	int fd=open("pipe",O_RDONLY);
	read(fd,s,sizeof(s));
	printf("return value %s\n",s);
	close(fd);
return 0;
}

