#include "matrix.h"

struct matrix* scambia_diagonali(const struct matrix* m) {

	if (m == NULL || m->rows != m->cols) {
		return NULL;
	}

	struct matrix* res = calloc(1, sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = calloc(res->rows * res->cols, sizeof(double));

	memcpy(res->data, m->data, (res->rows * res->cols) * sizeof(double));

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			if ((c + r) == res->rows - 1) {
				res->data[r * res->cols + c] = m->data[r * res->cols + r];
				res->data[r * res->cols + r] = m->data[r * res->cols + c];
			}
		}
	}

	return res;
}