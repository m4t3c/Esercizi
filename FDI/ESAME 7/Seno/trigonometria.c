#include <math.h>

double fact(double x) {
	if (x == 1) {
		return 1;
	}
	return (x * fact(x - 1));
}

extern double seno(double x) {
	double tmp = 0;
	double res = 1;
	double n = 0;

	while (tmp != res) {
		res = tmp;
		tmp += (pow(-1, n) / fact(2 * n + 1)) * pow(x, 2 * n + 1);
		++n;
	}

	return res;
}