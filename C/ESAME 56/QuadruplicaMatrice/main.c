#include "matrix.h"

int main(void) {
	
	struct matrix *m = malloc(sizeof(struct matrix));
	m->rows = 2;
	m->cols = 3;
	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	m->data = data;

	struct matrix* res = matrix_quadruplica(m);

	return 0;
}