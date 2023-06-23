#include<stdio.h>
#include<unistd.h>
int main()
{
	char *arg[]={NULL};
	int x=execvp("./add",arg);
	//int x=execvp("./add",argv);
	if(x==-1)
	{
		printf("execvp failed\n");
	}
}
