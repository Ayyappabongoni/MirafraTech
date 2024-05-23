#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>


int main()
{
	char s[20]="hjbvhwbcehj";

	int fd=open("pipe",O_WRONLY);
	write(fd,s,strlen(s));
	close(fd);

}
