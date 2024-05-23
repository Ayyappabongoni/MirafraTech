#include <sys/types.h>
#include <sys/stat.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	int x=mkfifo("pipe",0777);
		if(x==-1)
		{
			printf("pipe failed\n");
			exit(0);
		}
		else
			printf("pipe sucess");
}
