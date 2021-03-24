#include <stdio.h>

int main() {
        int num;
        printf("1. Nhap noi dung.\n");
        printf("2. Lay tu file vd.txt.\n");
        scanf("%d", &num);
	getchar();
        FILE *file;
        if (num == 1) {
                file = fopen("a.doc", "w");
                char str[20];
		printf("Nhap noi dung: \n");
                fgets(str, 10, stdin);
                fprintf(file,"%s", str);
                fclose(file);
        }
}
