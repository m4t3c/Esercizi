#include "matrix.h"

int main(void) {
	
	double d[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	struct matrix m = { 3, 3, d };
	
	struct matrix* res = scambia_diagonali(&m);

	return 0;
}