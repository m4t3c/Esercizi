#include "vettori.h"

double prodotto_scalare(const double* x, const double* y, size_t n) {

	if (x == NULL || y == NULL || n == 0) {
		return 0;
	}
	double res = 0;
	for (size_t i = 0; i < n; ++i) {
		res += x[i] * y[i];
	}

	return res;
}