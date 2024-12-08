#include "newton.h"

Polinomio* D(const Polinomio* p) {
	Polinomio* d = malloc(sizeof(Polinomio));
	d->size = p->size - 1;
	d->coeffs = malloc(d->size * sizeof(int));
	for (unsigned i = 1; i < p->size; i++) {
		d->coeffs[i - 1] = p->coeffs[i] * i;
	}

	return d;
}


int main(void) {

	Polinomio* p = malloc(sizeof(Polinomio));
	p->size = 4;
	p->coeffs = malloc(p->size * sizeof(int));
	p->coeffs[0] = 0;
	p->coeffs[1] = -2;
	p->coeffs[2] = 0;
	p->coeffs[3] = 1;

	Polinomio* d = (p);

	double res = Newton(p, d, 1, 0.00001, 4);

	return 0;
}