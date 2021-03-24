#include <stdio.h>

int calcSum(int num) {
	int result = 0;
	int remainder;
	while (num > 0) {
		remainder = num % 10;
		result += remainder;
		num = num / 10;
	}
	return result;
} 

int main() {
	int num;
	printf("Nhap so nguyen: ");
	scanf("%d", &num);
	int result = calcSum(num);
	printf("Tong cac digits: %d", result);
	return 0;	
}
