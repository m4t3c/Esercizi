#include "matrix.h"

int main(void) {

	struct matrix* m = malloc(sizeof(struct matrix));
	m->rows = 3;
	m->cols = 3;
	double datam[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	m->data = datam;

	struct matrix* S = malloc(sizeof(struct matrix));

	struct matrix* A = malloc(sizeof(struct matrix));

	mat_symdecomp(m, S, A);
	
	return 0;
}