#include <stdlib.h>

size_t shorten(int* v, size_t n, int max) {

	if (v == NULL || n == 0) {
		return 0;
	}

	size_t new_index = 0;

	for (size_t i = 0; i < n; ++i) {
		if (v[i] <= max) {
			v[new_index] = v[i];
			++new_index;
		}
	}

	return new_index;
}