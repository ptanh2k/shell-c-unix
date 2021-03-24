#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
	pid_t pid;
	pid = fork();
	int status = 0;

	if (pid < 0) {
		printf("Fork");
	} else if (pid == 0) {
		execv("/bin/sh", argv);
	} else {
		wait(&status);
		printf("Process returned with %d\n", status); 
	}
	return 0;
}
