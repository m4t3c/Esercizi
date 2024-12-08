#include "stat.h"

double media(double* x, unsigned int n) {

	if (x == NULL) {
		return 0;
	}
	if (n == 0) {
		return 0;
	}
	double somma = 0;
	for (size_t i = 0; i < n; ++i) {
		somma += x[i];
	}
	return somma / n;
}

extern double varianza(double* x, unsigned int n) {

	if (x == NULL || n < 2) {
		return 0;
	}

	double s = 0;
	for (unsigned int i = 0; i < n; ++i) {
		s += (x[i] - media(x, n)) * (x[i] - media(x, n));
	}

	return s / n;
}