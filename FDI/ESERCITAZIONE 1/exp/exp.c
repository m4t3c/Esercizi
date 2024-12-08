#include <math.h>

double fattoriale(double i) {
	if (i <= 1) {
		return 1;
	}
	return i * fattoriale(i - 1);
}

extern double exp(double x) {
	
	double res = 0;
	double tmp = 0;
	double count = 0;

	while (1)
	{
		tmp += pow(x, count) / fattoriale(count);
		if (tmp != res) {
			res = tmp;
			++count;
		}
		else
		{
			return res;
		}

	}
}