#include <math.h>
#include <float.h>

double SenRec(double x, int i, int n) {
	if (n > i) {
		return 0;
	}

	double cur_val = (pow(-1, n) / tgamma(2 * n + 1 + 1)) * pow(x, 2 * n + 1);

	return cur_val + SenRec(x, i, n + 1);
}

double Sen(double x, int i) {

	if (i < 0)	{
		return DBL_MIN;
	}

	return SenRec(x, i, 0);
}