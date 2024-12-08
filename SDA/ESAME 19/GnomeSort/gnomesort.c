#include <stdlib.h>

void GnomeSort(int* v, size_t v_size) {

	for (size_t i = 0; i < v_size; ++i) {
		if (i == 0) {
			continue;
		}

		if (v[i] < v[i - 1]) {
			int tmp = v[i];
			v[i] = v[i - 1];
			v[i - 1] = tmp;
			i -= 2;
		}
	}
}