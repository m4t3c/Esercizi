#include <stdlib.h>
#include <stdbool.h>

void BrickSort(int* v, size_t v_size) {
	
	bool check = true;
	
	while (check) {
		check = false;
		for (size_t i = 1; i < v_size; i += 2) {
			if ((i + 1) < v_size && v[i] > v[i + 1]) {
				int tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				check = true;
			}
		}

		for (size_t i = 0; i < v_size; i += 2) {
			if ((i + 1) < v_size && v[i] > v[i + 1]) {
				int tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
				check = true;
			}
		}
	}
}