#include <stdlib.h>

extern double entropia(const double *v, size_t n);

int main() {

	double v[] = { 40, 2, 22, 12, 0, 6 };
	size_t n = 6;

	double r = entropia(v, n);

	return 0;
}