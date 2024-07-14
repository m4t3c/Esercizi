#include <stdlib.h>
#include <math.h>

double entropia(const double* v, size_t n) {

	if (v == NULL || n == 0) {
		return 0;
	}

	double res = 0;

	for (size_t i = 0; i < n; ++i) {
		if (v[i] > 0)
		{
			res += -(v[i] * log2(v[i]));
		}
	}

	return res;
}