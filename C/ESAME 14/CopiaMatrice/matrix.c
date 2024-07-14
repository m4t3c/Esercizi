#include "matrix.h"
#include <string.h>

struct matrix* mat_copy(const struct matrix* mat) {

	struct matrix* res = malloc(sizeof(struct matrix));
	res->N = mat->N;
	res->M = mat->M;
	res->data = malloc(res->N * res->M * sizeof(double));
	memcpy(res->data, mat->data, res->N * res->M * sizeof(double));

	return res;
}