#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t child_a, child_b;
	int status;
	child_a = fork();
	if (child_a == 0) {
		printf("Process a id: %d\n", getpid());
	} else {
		child_b = fork();

		if (child_b == 0) {
			printf("Process b id: %d\n", getpid());
		} else {
			printf("Parent process id: %d\n", getpid());
		}
	}
	return 0;
}
