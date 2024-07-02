#include <stdlib.h>

extern void StazioniServizio(double m, const double* d, const double* p, size_t n);

int main(void) {

	double d[] = { 260.000000, 284.000000, 308.000000, 332.000000, 356.000000 };
	double p[] = { 35.000000, 35.000000, 33.000000, 29.000000, 23.000000 };

	StazioniServizio(2500.000000, d, p, 5);

	return 0;
}