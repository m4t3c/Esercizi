#include "stat.h"

int main(void) {

	double* v = calloc(5, sizeof(double));
	const double v_1[] = { 3, 5, 8, 8, 2 };
	for (size_t i = 0; i < 5; ++i) {
		v[i] = v_1[i];
	}
	double r = media(v, 5);

	free(v);
	return 0;
}