#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

void file_stat(char *fileName) {
	struct stat st;
	printf("File: %s \n", fileName);
	printf("File size: %ld bytes\n", st.st_size);
	printf("Access: %d\n", st.st_uid);

}

int main() {
	char fileName[50];
	printf("Nhap ten file: ");
	fgets(fileName, 50, stdin);
	file_stat(fileName);
}
