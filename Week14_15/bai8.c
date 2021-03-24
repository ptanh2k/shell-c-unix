#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/signal.h>

void sigintHandler(int signo) {
	signal(SIGINT, sigintHandler);
	printf("Exit.\n");
	exit(0);
}

void printContent(int start) {
	sleep(start);
	printf("Working...\n");
}

int main(int argc, char *argv[]) {
	signal(SIGINT, sigintHandler);
	int start, end;
	if (argc == 3) {
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		while (1) {
			printContent(start);
			sleep(end - start);
		}
	} else if (argc == 1) {
		printf("Start: ");
		scanf("%d", &start);
		printf("End: ");
		scanf("%d", &end);

		while (1) {
			printContent(start);
			sleep(end - start);
		}
	}
	return 0;
}
