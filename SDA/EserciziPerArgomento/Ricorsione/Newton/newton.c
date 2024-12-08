#include "newton.h"
#include <math.h>

static double F(const Polinomio* p, double xn) {
	double fxn = 0;

	for (size_t i = 0; i < p->size; ++i) {
		fxn += pow(xn, (double)i) * p->coeffs[i];
	}

	return fxn;
}

double Newton(const Polinomio* p, const Polinomio* d, double xn, double t, int max_iter) {

	double p_xn = F(p, xn);
	double d_xn = F(d, xn);

	double xn_1 = xn - (p_xn / d_xn);

	if (fabs(xn_1 - xn) <= t) {
		return xn_1;
	}

	if (max_iter == 1) {
		return xn_1;
	}

	return Newton(p, d, xn_1, t, max_iter - 1);
}