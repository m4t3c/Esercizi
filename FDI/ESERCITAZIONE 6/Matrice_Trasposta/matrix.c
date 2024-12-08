#include "matrix.h"

struct matrix* mat_transpose(const struct matrix* mat) {
	
	if (mat == NULL) {
		return NULL;
	}

	struct matrix* res = calloc(1, sizeof(struct matrix));
	res->rows = mat->cols;
	res->cols = mat->rows;
	res->data = calloc(res->rows * res->cols, sizeof(double));

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			res->data[r * res->cols + c] = mat->data[c * mat->cols + r];
		}
	}

	return res;
}