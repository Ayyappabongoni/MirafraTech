#include <unistd.h>
#include <stdio.h>

int main() {
    // Specify the program path
    char* programPath = "./a.out";

    // Set up the environment variables
    char* envp[] = {
        "VAR1=value1",
        "VAR2=value2",
        NULL
    };

    // Execute the program with specified environment variables
    if (execle(programPath, programPath, NULL, envp) == -1) {
        perror("execle");
        return 1;
    }

    // This line will only be reached if the execution fails
    printf("Execution completed.\n");

    return 0;
}

