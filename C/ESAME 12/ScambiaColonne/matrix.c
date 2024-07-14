#include "matrix.h"

void mat_swapcols(struct matrix* mat, size_t c1, size_t c2) {

	double tmp = 0;
	for (size_t r = 0; r < mat->N; ++r) {
		for (size_t c = 0; c < mat->M; ++c) {
			if (c == c1) {
				tmp = mat->data[r * mat->M + c];
				mat->data[r * mat->M + c] = mat->data[r * mat->M + c2];
				mat->data[r * mat->M + c2] = tmp;
			}
			if (c == c2) {
				continue;
			}
		}
	}
}