#include <stdlib.h>
#include <math.h>

unsigned int inverti(unsigned int i) {

	unsigned int tmp = i;
	double n_cifre = 0;
	while (tmp != 0)
	{
		++n_cifre;
		tmp /= 10;
	}

	unsigned r = 0;

	for (double h = n_cifre - 1; h >= 0; --h) {
		r += (unsigned)((i % 10) * pow(10, h));
		i /= 10;
	}

	return r;
}