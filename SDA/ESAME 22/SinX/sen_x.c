#include <stdlib.h>
#include <math.h>
#include <stdio.h>

double Fact(double x) {

	if (x == 1 || x == 0) {
		return 1;
	}

	return x * Fact(x - 1);
}

double SinXRec(double x, double i) {

	if (i == 0) {
		return ((pow(-1, i) / fabs(2 * i + 1)) * pow(x, 2 * i + 1));
	}

	return ((pow(-1, i) / Fact((2*i) + 1)) * pow(x, 2 * i + 1)) + SinXRec(x, i - 1);

}


int main(int argc, char** argv) {

	if (argc != 3) {
		return 1;
	}

	char* endptr = 0;
	double x = strtod(argv[1], &endptr);
	double i = strtod(argv[2], &endptr);
	if (i < 0 || *endptr != 0) {
		return 1;
	}
		
	double res = SinXRec(x, i);

	printf("%lf", res);

	return 0;
}