#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *file = fopen("vd.txt", "r");
	char buf[256];
	int line = 0;

	while (fgets(buf, sizeof(buf), file)) {
		line++;
		if (line == 4) {
			printf("%s\n", buf);
		}
	}

	return 0;
}

//https://www.unix.com/programming/58337-how-move-file-pointer-particular-line-c.html
