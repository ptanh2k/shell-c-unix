#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int fd, rc;
	fd = open("vd.doc", O_RDONLY);
	assert(fd >= 0);
	printf("Changing file mode\n");
	rc = fchmod(fd, 0600);
	assert(rc == 0);
	printf("Success\n");
	close(fd);
	return 0;
}
