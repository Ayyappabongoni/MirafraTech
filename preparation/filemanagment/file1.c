#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
int main()
{
	char s[30]="bhdbvelh berjvber ewbfccbhec";
	char p[30];
	int fd=open("str.txt",O_RDWR|O_CREAT);
	if(fd<0)
	{
		printf("open failed\n");
		exit(0);
	}

	int write_var=write(fd,s,strlen(s));
	if(write_var<0)
	{
		printf("write failed\n");
		exit(0);
	}
	printf("write bite %d\n",write_var);

	lseek(fd,0,SEEK_SET);
	read(fd,p,sizeof(p));

	printf("%s\n",p);
}
