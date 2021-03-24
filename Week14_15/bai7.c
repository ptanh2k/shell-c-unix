#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>
#include <unistd.h>
#include <utmp.h>
#include <sys/signal.h>

void sigintHandler(int signum) {
	signal(SIGINT, sigintHandler);
	printf("Exit.\n");
	exit(0);
}

void usr() {
	struct utmp *n;
	setutent();
	n = getutent();

	while (n) {
		if (n->ut_type == USER_PROCESS) {
			printf("%s (%s)\n", n->ut_line, n->ut_host);
		}
		n = getutent();
		printf("-----------------------------------\n");
	}
}

int main() {
	signal(SIGINT, sigintHandler);
	while (1) {
		usr();
		sleep(60);
	}
	return 0;
}
