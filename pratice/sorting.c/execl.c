#include<stdio.h>
#include<unistd.h>

int main()
{
	char *PATH="/bin/ls";

printf("hello world\n");	
execl(PATH,"-l",NULL);
printf("hello world\n");	
return 0;
}
