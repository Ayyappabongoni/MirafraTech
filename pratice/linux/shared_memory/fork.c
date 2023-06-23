#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    int shmid;
    key_t key;
    int *shared_memory;

    // Generate a unique key for the shared memory segment
    key = ftok("shared_memory_example", 1234);

    // Create a shared memory segment
    shmid = shmget(key, sizeof(int), IPC_CREAT | 0666);
    if (shmid == -1) {
	    perror("shmget");
	    exit(1);
    }

    // Attach the shared memory segment to the process
    shared_memory = (int *)shmat(shmid, NULL, 0);
    if (shared_memory == (int *)-1) {
	    perror("shmat");
	    exit(1);
    }

    // Fork a child process
    pid_t pid = fork();

    if (pid == -1) {
	    perror("fork");
	    exit(1);
    } else if (pid == 0) {
	    // Child process
	    *shared_memory = 42; // Write to shared memory

	    // Detach the shared memory segment from the child process
	    if (shmdt(shared_memory) == -1) {
		    perror("shmdt");
		    exit(1);
	    }
    } else {
	    // Parent process
	    // Wait for the child to finish
	    wait(NULL);

	    printf("Shared memory value: %d\n", *shared_memory); // Read from shared memory

	    // Detach the shared memory segment from the parent process
	    if (shmdt(shared_memory) == -1) {
		    perror("shmdt");
		    exit(1);
	    }

	    // Remove the shared memory segment
	    if (shmctl(shmid, IPC_RMID, NULL) == -1) {
		    perror("shmctl");
		    exit(1);
	    }
    }

    return 0;
}

