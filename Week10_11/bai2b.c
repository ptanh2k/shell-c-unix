#include <stdio.h>
#include <stdlib.h>

double findX(double a, double b) {
	if (b == 0) {
		printf("b cannot be 0");
	} else {
		double result = -b/a;
		return result;
	}
}

int main(int argc, char* argv[], char* envp[]) {
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double result = findX(a, b);
	printf("result: %2f", result);
	return 0;
}

