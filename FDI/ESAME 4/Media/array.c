#include "array.h"

double media(double* arr, size_t n) {

	double sum = 0;

	for (size_t i = 0; i < n; ++i) {
		sum += arr[i];
	}

	sum /= n;

	return sum;
}