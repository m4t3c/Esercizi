#include "matrix.h"

int main(void) {

	struct matrix* m1 = malloc(sizeof(struct matrix));
	m1->rows = 2;
	m1->cols = 3;
	double m1_data[] = { 1, 2, 3, 4, 5, 6 };
	m1->data = m1_data;

	struct matrix* m2 = malloc(sizeof(struct matrix));
	m2->rows = 3;
	m2->cols = 2;
	double m2_data[] = { 7, 10, 8, 11, 9, 12 };
	m2->data = m2_data;

	struct matrix* res = mat_mul(m1, m2);

	return 0;
}