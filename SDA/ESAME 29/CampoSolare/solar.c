#include <stdlib.h>
#include <math.h>

extern int* SolarCut(int A, size_t* sol_size) {

	int* res = NULL;
	size_t size = 0;
	while (A > 0)
	{
		int val = (int)sqrt(A);
		A -= val * val;
		++size;
		res = realloc(res, size * sizeof(int));
		res[size - 1] = val * val;
	}

	*sol_size = size;
	return res;
}