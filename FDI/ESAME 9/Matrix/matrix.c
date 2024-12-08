#include "matrix.h"

int mat_isupper(const struct matrix* matr) {

	if (matr->M != matr->N) {
		return 0;
	}

	for (size_t r = 0; r < matr->N; ++r) {
		for (size_t c = 0; c < matr->M; ++c) {
			if (matr->data[r * matr->M + c] != 0 && r > c) {
				return 0;
			}
		}
	}

	return 1;
}