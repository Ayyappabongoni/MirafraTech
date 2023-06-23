/*execvp--It takes the command (executable) name as the first argument and an array of strings representing the command-line arguments. 
The execvp system call automatically performs the path resolution and searches for the executable in the directories specified in the PATH.

execv-- The execv system call requires the full path to the executable file. It takes two arguments: 
the path to the executable and an array of strings representing the command-line arguments. 
With execv, you need to provide the absolute path to the executable file.


int execv(const char *path, char *const argv[]);
int execvp(const char *file, char *const argv[]);
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
	char *command="ps";
	char *arr[]={command,"-eaf",NULL};
	execvp(command,arr);

/*char *command="/bin/ps";
char *arr[]={command,"-eaf",NULL};
execv(command,arr);
*/
}
