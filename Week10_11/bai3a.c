#include <stdio.h>
#include <stdlib.h>

long int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	long int result = factorial(n);
	printf("Result: %ld", result); 
	return 0;
}
