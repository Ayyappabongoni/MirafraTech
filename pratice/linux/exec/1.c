#include <stdio.h>
#include <unistd.h>

int main() {
	char *args[] = {"ps", "-a", NULL};
	execvp("ps",args);
	printf("This line will not be executed.\n");
	return 0;
}

