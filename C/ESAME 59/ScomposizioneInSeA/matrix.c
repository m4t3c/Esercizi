#include "matrix.h"

void mat_symdecomp(const struct matrix* m, struct matrix* S, struct matrix* A) {
	
	if (m == NULL || S == NULL || A == NULL || m->rows != m->cols) {
		return;
	}

	S->rows = m->rows;
	S->cols = m->cols;
	S->data = malloc(S->rows * S->cols * sizeof(double));
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			S->data[r * S->cols + c] = (m->data[r * m->cols + c] + m->data[c * m->cols + r]) / 2;
		}
	}
	
	A->rows = m->rows;
	A->cols = m->cols;
	A->data = malloc(A->rows * A->cols * sizeof(double));
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			A->data[r * S->cols + c] = (m->data[r * m->cols + c] - m->data[c * m->cols + r]) / 2;
		}
	}
	
}