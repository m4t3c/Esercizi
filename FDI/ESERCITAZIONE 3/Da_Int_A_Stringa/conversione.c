#include <stdlib.h>

extern char* converti(unsigned int n) {

	int size = 0;
	unsigned int tmp = n;
	while (tmp != 0)
	{
		tmp /= 10;
		++size;
	}

	++size;
	char* r = calloc(size, 1);

	for (int i = size - 2; i >= 0; --i) {
		r[i] = '0' + n % 10;
		n /= 10;
	}

	r[size - 1] = 0;

	return r;
}