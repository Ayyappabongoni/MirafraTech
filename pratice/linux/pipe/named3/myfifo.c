#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main()
{
	int x=mkfifo("fifo",0666);
	if(x==-1)
	{
		printf("fifo failed\n");
		exit(0);
	}
	else
		printf("fifo created\n");
}
