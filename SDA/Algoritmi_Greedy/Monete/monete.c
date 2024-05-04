#include <stdlib.h>

extern int* Monete(int* tagli, size_t tagli_size, int budget) {
	if (budget <= 0) {
		return NULL;
	}

	int* ret = calloc(tagli_size, sizeof(int));
	for (size_t i = 0; i < tagli_size && budget != 0; ++i) {
		ret[i] = budget / tagli[i];
		budget = budget % tagli[i];
	}

	return ret;
}