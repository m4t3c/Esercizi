#include "matrix.h"

struct matrix* mat_rotate180(const struct matrix* m) {

	if (m == NULL) {
		return NULL;
	}

	struct matrix* res = malloc(sizeof(struct matrix));
	res->rows = m->rows;
	res->cols = m->cols;
	res->data = malloc(res->rows * res->cols * sizeof(double));

	size_t mr = m->rows - 1;
	size_t mc = m->cols - 1;

	for (size_t r = 0; r < res->rows; ++r) {
		for (size_t c = 0; c < res->cols; ++c) {
			res->data[r * res->cols + c] = m->data[mr * m->cols + mc];
			--mc;
		}
		--mr;
		mc = m->cols - 1;
	}

	return res;
}