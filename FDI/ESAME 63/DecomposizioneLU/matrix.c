#include "matrix.h"
#include <string.h>

static void zero_matrix(struct matrix* mat) {
	memset(mat->data, 0, mat->rows * mat->cols * sizeof(double));
}

static void identity_matrix(struct matrix* mat) {
	for (size_t r = 0; r < mat->rows; ++r) {
		for (size_t c = 0; c < mat->cols; ++c) {
			if (r == c) {
				mat->data[r * mat->cols + c] = 1;
			}
		}
	}
}

bool LUdecomposition(const struct matrix* mat, struct matrix* lower, struct matrix* upper) {
	if (mat == NULL || lower == NULL || upper == NULL) {
		return false;
	}

	if (mat->rows != mat->cols || lower->rows != lower->cols || upper->rows != upper->cols) {
		return false;
	}
	
	if (mat->rows != lower->rows || mat->rows != upper->rows) {
		return false;
	}

	size_t n = mat->rows;

	zero_matrix(lower);
	zero_matrix(upper);
	identity_matrix(lower);

	for (size_t i = 0; i < n; ++i) {
		for (size_t j = i; j < n; ++j) {
			double sum = 0;
			for (size_t t = 0; t < i; ++t) {
				sum += lower->data[i * n + t] * upper->data[t * n + j];
			}
			upper->data[i * n + j] = mat->data[i * n + j] - sum;
		}

		if (upper->data[i * n + i] == 0) {
			return false;
		}

		for (size_t j = i + 1; j < n; ++j) {
			double sum = 0;
			for (size_t t = 0; t < i; ++t) {
				sum += lower->data[j * n + t] * upper->data[t * n + i];
			}
			lower->data[j * n + i] = (mat->data[j * n + i] - sum) / upper->data[i * n + i];
		}
	}

	return true;
}