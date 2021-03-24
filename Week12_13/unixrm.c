#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[]) {
	FILE *file = fopen(argv[1], "r");
	int rm = remove(argv[1]);
	if (file == NULL) {
		printf("File not exist");
	} else {
		if (!rm) {
			printf("File deleted");
		} else {
			printf("Failed");
		}
	}
	fclose(file);
	return 0;
}
