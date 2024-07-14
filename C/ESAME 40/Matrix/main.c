#include "matrix.h"
#include <stdlib.h>

int main(void) {

	double data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	struct matrix* mat = malloc(sizeof(struct matrix));
	mat->rows = 3;
	mat->cols = 3;
	mat->data = data;

	struct matrix* res = mirror_mat(mat);

	return 0;
}