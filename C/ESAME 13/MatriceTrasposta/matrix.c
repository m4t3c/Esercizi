#include "matrix.h"

struct matrix* mat_transpose(const struct matrix* mat) {

	struct matrix* res = malloc(sizeof(struct matrix));
	res->N = mat->M;
	res->M = mat->N;
	res->data = malloc(res->N * res->M * sizeof(double));
	for (size_t r = 0; r < res->N; ++r) {
		for (size_t c = 0; c < res->M; ++c) {
			res->data[r * res->M + c] = mat->data[c * mat->M + r];
		}
	}

	return res;
}