#include <stdlib.h>
#include <math.h>

double fact(double x) {
	if (x == 1 || x == 0) {
		return 1;
	}
	return x * fact(x - 1);
}

extern double coseno(double x) {

	double n = 0;
	double res = 1;
	double tmp = 0;
	
	while (res != tmp) {
		res = tmp;
		tmp += (pow(-1, n)/fact(2 * n))*pow(x, 2*n);
		++n;
	}

	return res;
}