/*int execv (const char *path, char *const argv[]); */

#include<stdio.h>
#include<unistd.h>
int main()
{
	char *path="/bin/ls";
	char *args[]={path,"-a",NULL};
	int x=execv(path,args);
	if(x=-1)
	{
		printf("exec is failed\n");
	}
}
