#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char buf[256];
	FILE *file = fopen(argv[2], "r");
	char *ch;

	//Check if file exists.
	if (file == NULL) {
		printf("File doesn't exist");
	} else {					//If file exists.
		while (!feof(file)) {
			fgets(buf, sizeof(buf), file);
			ch = strstr(buf, argv[1]);
			if (ch != NULL) {
				printf("%s\n", buf);
			}
		}
		fclose(file);
	}
	return 0;
}
