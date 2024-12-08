#include "matrix.h"

struct matrix* mat_diffleft(const struct matrix* m) {

	if (m == NULL) {
		return NULL;
	}

	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			if (c != 0) {
				res->data[r * res->cols + c] = m->data[r * m->cols + c] - m->data[r * m->cols + (c - 1)];
			}
			else
			{
				res->data[r * res->cols + c] = m->data[r * m->cols + c];
			}
		}
	}

	return res;
}