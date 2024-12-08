#include "matrix.h"

int main(void) {

	double data[3 * 3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
	struct matrix m = {3, 3, data};

	mat_swaprows(&m, 0, 2);

	return 0;
}