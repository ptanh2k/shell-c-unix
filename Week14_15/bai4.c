#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main() {
	int pfds[2];

	if (pipe(pfds) == -1) {
		printf("Error, try again");
		exit(1);
	}

	if (!fork()) {
		
	}
}
