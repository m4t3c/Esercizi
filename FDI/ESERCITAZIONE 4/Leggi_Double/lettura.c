#include "lettura.h"

extern double* leggidouble(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	double* res = NULL;
	size_t i = 0;
	size_t n_reads = 0;
	double tmp = 0;

	while ((n_reads = fscanf(f, "%lf", &tmp)) == 1) {
		res = realloc(res, (i + 1) * sizeof(double));
		res[i] = tmp;
		++i;
	}

	*size = i;
	fclose(f);
	return res;
}