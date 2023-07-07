/*7. wap to initialize 1k stars (1024 *'s) into the driver and come back to 10th position and write "sree embedded" 
   and go to the 100th position and write the string "Technologies" then read the complete string and display from app?
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
	char buffer[1050];
	char s[1025];
	char str[50]="sree embedded";
	char sub[50]="Technologies";
	
	for(int i=0;i<1024;i++)
	{
		s[i]='*';
	}
	
	int fd=open("/dev/stars",O_RDWR);
	if(fd==-1)
	{
		printf("open failed\n");
		exit(0);
	}

	write(fd,s,strlen(s));
	lseek(fd,10,SEEK_SET);
	write(fd,str,strlen(str));
	lseek(fd,100,SEEK_SET);
	write(fd,sub,strlen(sub));

	lseek(fd,0,SEEK_SET);
	read(fd,buffer,sizeof(buffer));
	buffer[1020]='\0';
	printf("receve3d data is \n%s\n",buffer);
	close(fd);
}
