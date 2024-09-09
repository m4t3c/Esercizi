#include <stdlib.h>
#include <math.h>
#include <stdio.h>

static double Fact(double x) {
	if (x == 0 || x == 1) {
		return 1;
	}

	return x * Fact(x - 1);
}

static void SinXRec(double x, double sin, double i, double n) {
	if (n > i) {
		printf("%lf", sin);
		return;
	}

	double fact = Fact(2 * n + 1);
	sin += (pow(-1, n) / fact) * pow(x, 2 * n + 1);
	
	SinXRec(x, sin, i, n + 1);
}

int main(int argc, char** argv) {

	if (argc != 3) {
		return 1;
	}

	char* endptr;
	double x = strtod(argv[1], &endptr);
	if (*endptr != 0) {
		return 1;
	}

	double i = strtod(argv[2], &endptr);
	if (i < 0 || *endptr != 0) {
		return 1;
	}

	SinXRec(x, 0, i, 0);

}