#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argv, char** argc) {
	if (argv != 4) {
		return 1;
	}

	double a = 0, b = 0, c = 0;
	char* endptr = 0;
	a = strtod(argc[1], &endptr);
	if (*endptr != 0 || a <= 0) {
		return 1;
	}
	b = strtod(argc[2], &endptr);
	if (*endptr != 0 || b <= 0) {
		return 1;
	}
	c = strtod(argc[3], &endptr);
	if (*endptr != 0 || c <= 0) {
		return 1;
	}

	double Area = (sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / 4);

	fprintf(stdout, "%f", Area);

	return 0;
}