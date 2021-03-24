#include <stdio.h>

float findX(float a, float b) {
	if (b == 0) {
		printf("b cannot be 0");
	} else {
		float result = -b/a;
		return result;
	}
}

int main() {
	float a, b;
	printf("Input a, b: ");
	scanf("%f %f", &a, &b);
	float result = findX(a, b);
	printf("x = %.2f", result);
	return 0;
}
