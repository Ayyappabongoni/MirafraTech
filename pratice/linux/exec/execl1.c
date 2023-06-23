#include<stdio.h>
#include<unistd.h>
int main()
{
	//int x=execl("/bin/ps","ps","-el",(char *)0);
	char *path="/bin/ps";
	char *s[]={"ps","-el"};
	int x=execl(path,s[0],s[1],(char *)0);
	if(x==-1)
	{
		printf("execv is failed\n");
	}
}
