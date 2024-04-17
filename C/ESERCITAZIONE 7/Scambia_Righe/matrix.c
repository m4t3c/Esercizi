#include "matrix.h"

void mat_swaprows(struct matrix* mat, size_t r1, size_t r2) {

	double* swap = calloc(mat->M, sizeof(double));

	for (size_t c = 0; c < mat->M; ++c) {
		swap[c] = mat->data[(r1) * mat->M + c];
	}

	for (size_t c = 0; c < mat->M; ++c) {
		mat->data[(r1) * mat->M + c] = mat->data[(r2) * mat->M + c];
	}

	for (size_t c = 0; c < mat->M; ++c) {
		mat->data[(r2) * mat->M + c] = swap[c];
	}

	free(swap);

	return;
}