#include <stdlib.h>

static void Swap(int* v, size_t i1, size_t i2) {
	int tmp = v[i1];
	v[i1] = v[i2];
	v[i2] = tmp;
}

void InsertionSort(int* v, size_t v_size) {

	for (size_t i = 0; i < v_size; ++i) {
		if (v[i] < v[i - 1]) {
			size_t j = i;
			while (v[j] < v[j - 1] && j != 0) {
				Swap(v, j, j - 1);
				--j;
			}
		}
	}
}