#include "matrix.h"

struct matrix* mat_rowmul(const struct matrix* m1, const struct matrix* m2) {

	if (m1 == NULL || m2 == NULL || m2->rows != m1->rows || m2->cols != 1) {
		return NULL;
	}

	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m1->rows;
	res->cols = m1->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));
	
	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			res->data[r * res->cols + c] = m1->data[r * m1->cols + c] * m2->data[r];
		}
	}

	return res;
}