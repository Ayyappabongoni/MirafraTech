/*Unlike execv and execvp, which take an array of strings as the command-line arguments, 
execl requires the command-line arguments to be passed as individual arguments to the function.
execl("/bin/ls", "ls", "-l", NULL);
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
	int x=execl("/bin/ls","-a",(char *)0);
	if(x=-1)
		printf("exec is failed\n");
}
