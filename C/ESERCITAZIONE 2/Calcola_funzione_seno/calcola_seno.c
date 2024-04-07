#include <stdlib.h>
#include <math.h>

double fattoriale(double n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fattoriale(n - 1);
}

extern double calcola_seno(double x) {
	
	double prev = 0;
	double res = 0;
	double i = 0;

	do
	{
		prev = res;
		res += ((pow(-1, i)) / (fattoriale((2 * i) + 1)) * pow(x, (2 * i) + 1));
		++i;
	} while (prev != res);

	return res;
}