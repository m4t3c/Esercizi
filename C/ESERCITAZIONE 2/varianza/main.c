#include "stat.h"

int main(void) {

	const double a[] = { 9, 5, 6, 3, 2, 4 };
	double *v = calloc(6, sizeof(double));
	for (size_t i = 0; i < 6; ++i) {
		v[i] = a[i];
	}

	double r = varianza(v, 6);

	free(v);
	return 0;
}