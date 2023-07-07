/*1. Write three different strings into the driver from app.
   a) "Mirafra"
   b) "Technologies"
   c) "Hyderabad"

   and read all the strings at a time
*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>


int main()
{
	char buff[50];
	char *s[]={"Mirafra ","Technologies ","hyderabad"};
	int fd=open("/dev/3_strings",O_RDWR);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}

	for(int i=0;i<3;i++)
	{
		write(fd,s[i],strlen(s[i]));
	}
	read(fd,buff,30);
	close(fd);
	printf("%s\n",buff);
}
