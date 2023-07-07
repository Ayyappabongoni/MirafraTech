/*2. write the above strings seperately and read them seperately from the driver.
    (implement write and read consecutively/alternatively)
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
	char buffer[50];
	char *s[]={"Mirafra","Technologies","hyderabad"};
	int fd=open("/dev/consecutively",O_RDWR);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}

	for(int i=0;i<3;i++)
	{
		write(fd,s[i],strlen(s[i]));
		read(fd,buffer,strlen(s[i]));
		buffer[strlen(s[i])]='\0';//make remaining size null
		printf("s[%d] :- %s\n",i,buffer);
	}
	close(fd);
}

