#include "matrix.h"

int matrix_read(struct matrix* matr, FILE* f) {

	if (matr == NULL || f == NULL) {
		return 0;
	}

	int n = fscanf(f, "%zu\n%zu\n", &matr->N, &matr->M);
	if (n != 2) {
		return 0;
	}

	matr->data = malloc(matr->M * matr->N * sizeof(double));
	for (size_t r = 0; r < matr->N; ++r) {
		for (size_t c = 0; c < matr->M; ++c) {
			if (fscanf(f, "%lf", &matr->data[r * matr->M + c]) != 1) {
				free(matr);
				return 0;
			}
		}
	}
	return 1;
}