#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *file = fopen("vidu.doc", "wb");
	FILE *resFile = fopen("vd.txt", "r");

	//if files not found.
	if (!file && !resFile) {
		printf("File not found");
	}

	char buf[256];
	while (fgets(buf, sizeof(buf), resFile)) {
		fputs(buf, file);
	}
	
	fclose(resFile);
	fclose(file);
	return 0;
}
