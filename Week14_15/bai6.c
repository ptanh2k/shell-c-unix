#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <signal.h>

void sigintHandler(int sig_num) {
	signal(SIGINT, sigintHandler);
	printf("Exit.\n");
	exit(0);
}

char **ls(char *dirpath, int *n) {
	DIR *dp = opendir(dirpath);
	if (!dp) {
		printf("Directory not exist\n");
		exit(1);
	}
	struct dirent *ep;
	ep = readdir(dp);
	char **res = (char **)malloc(100 * sizeof(char));
	
	while (ep) {
		if (strncmp(ep->d_name, ".", 1) && strncmp(ep->d_name, "..", 1)) {

		}
	}
}

int main() {
	
	return 0;
}
