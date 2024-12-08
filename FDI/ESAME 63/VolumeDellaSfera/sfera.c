#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char *endptr;
	double r = strtod(argv[1], &endptr);
	if (*endptr != 0 || r < 0) {
		return 1;
	}

	r = pow(r, 3);
	const double pi = 3.1415926535897932384626433832795;
	double vol = (4 * pi * r) / 3;

	fprintf(stdout, "%.10lf\n", vol);

	return 0;
}