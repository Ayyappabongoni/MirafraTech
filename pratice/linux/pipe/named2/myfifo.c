#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main()
{
	int x=mkfifo("myfifo",0777);//create fifo
	if(x==-1)
	{
		printf("fifo failed\n");
		exit(0);
	}
	else
		printf("fifo created\n");
}
