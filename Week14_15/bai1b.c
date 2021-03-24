#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
	pid_t child_a, child_b;
	child_b = fork();

	if (child_b == 0) {
		printf("Process b: %d\n", getpid());
		sleep(5);
	} else {
		child_a = fork();
		
		if (child_a == 0) {
			printf("Process a: %d\n", getpid());
			printf("Process b spawn\n");
			sleep(7);
			wait(NULL);
			printf("Process b terminated\n");
		} else {
			printf("Parent process: %d\n", getpid());
			printf("Process a spawn\n");
			wait(NULL);
			printf("Process a terminated\n");
		}
	}
	return 0;
}
