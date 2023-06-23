#include<stdio.h>
#include<unistd.h>
int main()
{
	char *p="./fork";
	int x=execvp(p,NULL);
	{
		if(x==-1)
		{
			printf("execvp is failed\n");
		}
	}
}

