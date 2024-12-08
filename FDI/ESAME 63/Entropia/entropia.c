#include <math.h>
#include <stdint.h>
#include <stddef.h>

extern double entropia(uint64_t* count, size_t n) {

	if (count == NULL || n == 0) {
		return NAN;
	}

	double N = 0;
	for (size_t i = 0; i < n; ++i) {
		N += count[i];
	}

	if (N == 0) {
		return NAN;
	}

	double pi = 0;
	double H = 0;

	for (size_t i = 0; i < n; ++i) {
		if (count[i] == 0) {
			continue;
		}
		pi = count[i] / N;
		H += pi * log2(1 / pi);
	}

	return H;
}