#include <stdlib.h>
#include <stdio.h>

static void LogisticMapRec(double x, double r, int n, int i) {

	if (i == n) {
		printf("%lf", x);
		return;
	}

	LogisticMapRec(r * x * (1 - x), r, n, i + 1);
}

int main(int argc, char** argv) {

	if (argc != 4) {
		return 1;
	}

	char* endptr;
	double x = strtod(argv[1], &endptr);
	if (x < 0 || x > 1 || *endptr != 0) {
		return 1;
	}

	double r = strtod(argv[2], &endptr);
	if (r < 0 || *endptr != 0) {
		return 1;
	}

	int n = strtol(argv[3], &endptr, 10);
	if (n < 0 || *endptr != 0) {
		return 1;
	}

	LogisticMapRec(x, r, n, 0);

	return 0;
}