#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char *cwd;
	char buf[64];
	cwd = getcwd(buf, 64);
	if (cwd != NULL) {
		printf("Current directory: %s\n", cwd);
	}

	if (argc != 2) {
		printf("Usage: cd <directory>\n");
	}

	chdir(argv[1]);
	
	cwd = getcwd(buf, 64);
	if (cwd != NULL) {
		printf("New directory: %s\n", cwd);
	} else {
		printf("No such file or directory");
	}

	return 0;
}
