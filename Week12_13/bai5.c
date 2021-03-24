#include <stdio.h>
#include <stdlib.h>

void catCommand(char *path) {
	FILE *file = fopen(path, "r");
	char buf[256];
	while (fgets(buf, sizeof(buf), file)) {
		printf("%s", buf);
	}
	fclose(file);
}

int main(int argc, char *argv[]) {
	char path[256];
	if (argc == 1) {
		printf("cat ");
		scanf("%s", path);
		catCommand(path);
	} else if (argc == 2) {
		catCommand(argv[1]);
	}
	return 0;
}
