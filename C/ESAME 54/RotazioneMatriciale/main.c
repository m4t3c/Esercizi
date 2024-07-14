#include "matrix.h"

int main(void) {

	struct matrix* m = malloc(sizeof(struct matrix));
	m->rows = 2;
	m->cols = 3;
	double mdata[] = { 1, 2, 3, 4, 5, 6 };
	m->data = mdata;

	struct matrix* res = mat_rotate180(m);

	return 0;
}