#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc == 3) { 
		FILE *src = fopen(argv[1], "r");
	//Check if src exist.
		if (src == NULL) {
			printf("Source file doesn't exist");
			exit(1);
		}
		
		FILE *des = fopen(argv[2], "w+");
		while (!feof(src)) {
			char buf[256];
			if (fgets(buf, sizeof(buf), src) != NULL) {
				fputs(buf, des);
			} 		
		}
		fclose(src);
		fclose(des);
	} else {
		printf("Usage: ./bai10 <file1> <file2>\n");
		exit(1);
	}
	return 0;
}
