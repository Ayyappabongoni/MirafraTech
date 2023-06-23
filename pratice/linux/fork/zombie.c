/*a zombie process is a process that has completed execution but still has an entry in the process table.
 It exists in a "zombie" state until its parent process retrieves its exit status using the wait system call*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork() failed");
        exit(1);
    } else if (pid == 0) {
        // Child process
        printf("Child process is running\n");
	sleep(5);
	printf("child is exit\n");
        exit(0);
    } else {
        // Parent process
	wait(NULL);
        //sleep(1); // Wait for child to exit
        printf("Parent process is running\n");
        // Do not wait for child process, leaving it as a zombie
    }

    return 0;
}

