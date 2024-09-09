#include <stdlib.h>

int* Monete(const int* tagli, size_t tagli_size, int budget) {

	if (budget <= 0) {
		return NULL;
	}

	int* res = calloc(tagli_size, sizeof(int));
	for (size_t i = 0; i < tagli_size; ++i) {
		int n_max = budget / tagli[i];
		budget -= n_max * tagli[i];
		res[i] = n_max;
	}

	return res;
}