#include<stdio.h>
#include<unistd.h>
int main()
{
	char *argv[]={NULL}; 
	if( (execvp("./fork",argv)) ==-1)
	{
		printf("execvp is failed\n");
	}
}
