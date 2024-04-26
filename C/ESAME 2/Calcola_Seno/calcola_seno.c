#include <math.h>

double fattoriale(double n) {
	if (n == 1 || n == 0) {
		return 1;
	}

	return n * fattoriale(n - 1);
}

double calcola_seno(double x) {

	const double n = -1;
	double sen = 0;
	for (double i = 0; i < 20; ++i) {
		double num = pow(n, i);
		double den = fattoriale((2 * i) + 1);
		double prod = pow(x, (2 * i) + 1);
		sen += (num / den) * prod;
	}

	return sen;
}