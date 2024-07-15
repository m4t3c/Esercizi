#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {

	if (argc != 6) {
		return 1;
	}

	char* endptr;
	double sx = strtod(argv[1], &endptr);
	if (*endptr != 0) {
		return 1;
	}
	double sy = strtod(argv[2], &endptr);
	if (*endptr != 0) {
		return 1;
	}
	double ex = strtod(argv[3], &endptr);
	if (*endptr != 0) {
		return 1;
	}
	double ey = strtod(argv[4], &endptr);
	if (*endptr != 0) {
		return 1;
	}

	int n = strtol(argv[5], &endptr, 10);
	if (*endptr != 0) {
		return 1;
	}

	for (int i = 0; i <= n; ++i) {
		double xi = sx + (((ex - sx) / n) * i);
		double yi = sy + (((ey - sy) / (ex - sx)) * (xi - sx));

		printf("(%.3lf, %.3lf)\n", xi, yi);
	}

	return 0;
}