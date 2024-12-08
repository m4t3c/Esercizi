#include "matrix.h"

struct matrix* mat_mul(const struct matrix* m1, const struct matrix* m2) {

	if (m1 == NULL || m2 == NULL || m1->cols != m2->rows) {
		return NULL;
	}

	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m1->rows;
	res->cols = m2->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			double d = 0;
			for (size_t tmp = 0; tmp < m2->rows; ++tmp) {
				d += m1->data[r * m1->cols + tmp] * m2->data[tmp * m2->cols + c];
			}
			res->data[r * res->cols + c] = d;
		}
	}

	return res;
}