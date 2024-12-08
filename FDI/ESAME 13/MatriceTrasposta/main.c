#include "matrix.h"

int main() {

	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	struct matrix* mat = malloc(sizeof(struct matrix));
	mat->N = 2;
	mat->M = 3;
	mat->data = data;

	struct matrix* r = mat_transpose(mat);

	return 0;
}