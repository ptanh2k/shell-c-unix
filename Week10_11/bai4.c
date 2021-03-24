#include <stdio.h>
#include <stdlib.h>

const char CHAR_55 = 55;
const char CHAR_48 = 48;

int convertNumber(int transSys, int number) {
	if (number < 0 || transSys < 2 || transSys > 16) {
		printf("Error");
		return 0;
	}
	char arr[20];
	int count = 0;
	int remainder = number;
	int m;
	while (remainder > 0) {
		if (transSys > 10) {
			m = remainder % transSys;
			if (m >= 10) {
				arr[count] = (char) (m + CHAR_55);
				count++;
			} else {
				arr[count] = (char) (m + CHAR_48);
				count++;
			}
		} else {
			arr[count] = (char) ((remainder % transSys) + CHAR_48);
			count++;
		}
		remainder = remainder / transSys;
	}

	//Display.
	for (int i = count - 1; i >= 0; i--) {
		printf("%c", arr[i]);
	}
	return 1;
}

int main(int argc, char* argv[], char* environ[]) {
	int transSys = atoi(argv[1]);
	int number = atoi(argv[2]);
	printf("So %d trong he co so %d la: ", number, transSys);
	convertNumber(transSys, number);
	return 1;
}

//Algorithm: https://viettuts.vn/bai-tap-c/chuyen-doi-he-co-so-trong-c.
