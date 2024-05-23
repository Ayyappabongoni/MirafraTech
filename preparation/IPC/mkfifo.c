#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

//       int mkfifo(const char *pathname, mode_t mode);



int main()
{
	if(mkfifo("pipe",0777)<0)
		printf("pipe failed\n");

}
