#include "array.h"
#include "string.h"

double* array_remove(const double* arr, size_t n, size_t pos) {

	if (pos >= n || arr == NULL) {
		return NULL;
	}

	double* res = malloc((n - 1) * sizeof(double));
	size_t j = 0;
	for (size_t i = 0; i < n - 1; ++i) {
		if (j == pos - 1) {
			++j;
		}
		res[i] = arr[j];
		++j;
	}

	return res;
}