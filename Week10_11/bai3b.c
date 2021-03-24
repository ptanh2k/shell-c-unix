#include <stdio.h>
#include <stdlib.h>

long int factorial(int n) {
	if (n == 0 || n == 1) return 1;
	return n * factorial(n - 1);
}

int main(int argc, char* argv[], char* env[] ) {
	int n = atoi(argv[1]);
	long int result = factorial(n);
	printf("n: %d", n);
	printf("Result: %ld", result); 
	return 0;
}
