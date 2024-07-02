#include "matrix.h"

int main(void) {

	double data[] = { 1,2,0,3};
	struct matrix* mat = malloc(sizeof(struct matrix));
	mat->N = 2;
	mat->M = 2;
	mat->data = data;

	int r = mat_isupper(mat);

	return 0;
}