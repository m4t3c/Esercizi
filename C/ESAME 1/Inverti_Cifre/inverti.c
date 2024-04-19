#include <stdlib.h>
#include <math.h>

unsigned int inverti(unsigned int i) {

	unsigned tmp = i;
	unsigned n = 0;
	while (tmp != 0)
	{
		tmp /= 10;
		++n;
	}

	unsigned* v = calloc(n, sizeof(unsigned));
	for (unsigned j = 0; j < n; ++j) {
		v[j] = i % 10;
		i /= 10;
	}

	tmp = n - 1;
	unsigned res = 0;
	for (unsigned j = 0; j < n; ++j) {
		res += v[j] * (unsigned)pow(10, tmp);
		--tmp;
	}

	free(v);
	return res;
}