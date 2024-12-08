#include <math.h>

extern int soluzioni(double a, double b, double c, double* x1, double* x2) {

	double dis = (b * b) - (4 * (a * c));

	if (dis < 0) {
		return 0;
	}
	else if (dis == 0)
	{
		double ris = -b / 2 * a;
		*x1 = ris;
		*x2 = ris;
		return 1;
	}
	else
	{
		dis = sqrt(dis);
		double ris1 = (-b + dis) / (2 * a);
		double ris2 = (-b - dis) / (2 * a);
		*x1 = ris1;
		*x2 = ris2;
		return 2;
	}
}