#include "matrix.h"

void matrix_write(const struct matrix* matr, FILE* f) {

	fprintf(f, "%zu\n%zu\n", matr->N, matr->M);
	for (size_t r = 0; r < matr->N; ++r) {
		for (size_t c = 0; c < matr->M; ++c) {
			fprintf(f, "%f", matr->data[r * matr->M + c]);
			if (c == matr->M - 1) {
				fprintf(f, "\n");
			}
			else
			{
				fprintf(f, "\t");
			}
		}
	}
}