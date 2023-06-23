#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

int main()
{
    int x = fork();

    if (x == 0)
    {
        char s[] = "bkbvfkbfkjwb";
        printf("This is the child process.\n");
        int fd = open("f1.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
        write(fd, s, sizeof(s) - 1); // Exclude the null character
        close(fd);
        exit(0);
    }
    else
    {
        int status;
        wait(&status);
        char buffer[100]; // Adjust the buffer size accordingly
        printf("This is the parent process.\n");
        int fd = open("f1.txt", O_RDONLY);
        int bytesRead = read(fd, buffer, sizeof(buffer) - 1);
        buffer[bytesRead] = '\0'; // Add null character at the end
        close(fd);
        printf("The output is:\n%s\n", buffer);
    }
    return 0;
}

