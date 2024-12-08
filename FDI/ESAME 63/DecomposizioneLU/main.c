#include "matrix.h"

int main(void) {

	double data_mat[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	double data_lower[] = { 5, 67, 3, 4, 3, 23, 66, 7, 4 };
	double data_upper[] = { 43, 32, 3 ,22 ,45, 6, 78, 5, 23 };

	struct matrix* mat = malloc(sizeof(struct matrix));
	mat->rows = 3;
	mat->cols = 3;
	mat->data = data_mat;

	struct matrix* lower = malloc(sizeof(struct matrix));
	lower->rows = 3;
	lower->cols = 3;
	lower->data = data_lower;

	struct matrix* upper = malloc(sizeof(struct matrix));
	upper->rows = 3;
	upper->cols = 3;
	upper->data = data_upper;

	bool res = LUdecomposition(mat, lower, upper);

	return 0;
}