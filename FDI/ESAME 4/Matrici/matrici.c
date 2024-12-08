#include "matrici.h"

double* diag(double* matr, size_t n) {

	double* res = malloc(n * sizeof(double));
	size_t idx = 0;

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = 0; j < n; ++j) {
			if (i == j) {
				res[idx] = matr[(i * n) + j];
				++idx;
			}
		}
	}

	return res;
}