
#include <stdlib.h>
#include <math.h>

double solve(double a) {

	double x_t = 0;
	double x = 0;

	do {
		x_t = x;
		x = x_t + ((cos(x_t) - (a * x_t)) / (sin(x_t) + a));
		++x;
	} while (fabs(x - x_t) >= 1e-10);

	return x;
}