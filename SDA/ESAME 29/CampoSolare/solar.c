#include <stdlib.h>
#include <math.h>

int* SolarCut(int A, size_t* sol_size) {

	int* res = NULL;
	size_t size = 0;

	while (A != 0) {
		++size;
		res = realloc(res, size * sizeof(int));
		int rad = (int)sqrt(A);
		res[size - 1] = rad * rad;
		A -= rad * rad;
	}

	*sol_size = size;
	return res;
}