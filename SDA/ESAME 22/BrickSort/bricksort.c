#include <stdlib.h>
#include <stdbool.h>

static void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void BrickSort(int* v, size_t v_size) {
	
	bool done = false;

	while (!done) {

		done = true;

		for (int i = 1; i < (int)v_size; i += 2) {
			if ((i + 1) < (int)v_size && v[i] > v[i + 1]) {
				swap(v + i, v + i + 1);
				done = false;
			}
		}

		for (int i = 0; i < (int)v_size; i += 2) {
			if ((i + 1) < (int)v_size && v[i] > v[i + 1]) {
				swap(v + i, v + i + 1);
				done = false;
			}
		}
	}
}
