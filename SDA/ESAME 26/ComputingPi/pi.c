#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static double ComputingPi(double n) {
	if (n == 0) {
		return 4;
	}

	return (4 * pow(-1, n)) / (2 * n + 1) + ComputingPi(n - 1);
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	double n = strtod(argv[1], &endptr);
	if (n < 0 || *endptr != 0) {
		return 1;
	}

	double res = ComputingPi(n);
	printf("%.6lf", res);

	return 0;
}