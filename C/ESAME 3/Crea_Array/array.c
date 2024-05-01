#include <stdlib.h>

extern int* crea_inizializza(unsigned int n, int val) {

	int* res = calloc(n, sizeof(int));
	for (unsigned i = 0; i < n; ++i) {
		res[i] = val;
		--val;
	}

	return res;
}