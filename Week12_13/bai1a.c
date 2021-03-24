#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *file = fopen("vidu.doc", "wb");
	char buf[256];

	while (fgets(buf,sizeof(buf), stdin)) {
		if (strncmp(buf, "EOF", 1) && strncmp(buf, "eof", 1)) {
			fputs(buf, file);
		} else {
			break;
		}
	}

	fclose(file);
	return 0;
}
