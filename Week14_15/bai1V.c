#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
	pid_t child = fork();

	if (child < 0) {
		printf("Fork");
	} else if (child == 0) {
		printf("Child process: %d\n", getpid());
		sleep(5);
	} else {
		printf("Parent process: %d\n", getpid());
		printf("Child process spawn\n");
		wait(NULL);
		printf("Child process has terminated\n");
	}
	return 0;
}
