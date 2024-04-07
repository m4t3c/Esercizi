#include "matrix.h"

int main(void) {
	
	double data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	struct matrix m = { 2, 3, data };
	struct matrix* res = mat_transpose(&m);

	return 0;
}