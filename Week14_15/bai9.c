#include "apue.h"
#include <fcntl.h>
#include <errno.h>

void sigint(int signo) {

}

int main(void) {
	pid_t pid1, pid2;
	int fd;
	setbuf(stdout, NULL);
	signal_intr(SIGINT, Sigint);
}
