#include <stdlib.h>

void minmax(const int* v, size_t n, int* min, int* max) {

	if (v == NULL || n == 0) {
		return;
	}

	int tmp = v[0];
	for (size_t i = 1; i < n; ++i) {
		if (v[i] > tmp) {
			tmp = v[i];
		}
	}
	*max = tmp;

	for (size_t i = 0; i < n; ++i) {
		if (v[i] < tmp) {
			tmp = v[i];
		}
	}

	*min = tmp;
}