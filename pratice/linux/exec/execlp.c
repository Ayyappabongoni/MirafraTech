/*int execlp (const char *file, const char *arg0, ..., (char *)0);
Allows specifying only the name of the executable file (without the full path) as the first argument (file).
Searches for the executable file in the directories listed in the PATH environment variable.
Each command-line argument is specified as a separate argument to execlp.
The argument list must be terminated with a NULL pointer.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
	if( (execlp("./fork","fork",(char *)0)) ==-1)
	{
		printf("execlp is failed\n");
	}
}
