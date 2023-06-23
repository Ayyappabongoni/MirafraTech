#include<stdio.h>
#include<unistd.h>
int main()
{
	char *path="/bin/ps";
	char *s[]={path"-el",NULL};
	int x=execv(path,s);
	if(x==-1)
	{
		printf("exec is failed\n");
	}
}
