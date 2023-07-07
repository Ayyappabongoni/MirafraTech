/*6. wap to enter max of 4k bytes into the driver. the driver should not accept more than that max limit.
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
	int a=1;
	while(a){
		int n;
		printf("enter upto 4096\n");
		scanf("%d",&n);
		char buffer[n];
		char s[n];
		char ch;
		printf("enter the character to write 4k times\n");
		scanf(" %c",&ch);
		for(int i=0;i<n;i++)
		{
			s[i]=ch;
		}

		int fd=open("/dev/limit",O_RDWR);
		if(fd==-1)
		{
			printf("open failed\n");
			exit(0);
		}
		write(fd,s,strlen(s));
		read(fd,buffer,sizeof(buffer));	
		printf("receve3d data is \n%s\n",buffer);
		close(fd);
		printf("do you want to continue yes-1 no-0");
		scanf("%d",&a);
	}
}
