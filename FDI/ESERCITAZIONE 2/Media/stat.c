#include "stat.h"

extern double media(double* x, unsigned int n) {

	if (x == NULL || n == 0) {
		return 0;
	}

	double sum = 0;
	for (size_t i = 0; i != n; ++i) {
		sum += x[i];
	}

	return sum / n;
}