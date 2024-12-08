#include <stdlib.h>
#include <stdbool.h>

extern bool crescente(unsigned int x) {
	if ((x / 10) == 0) {
		return true;
	}

	unsigned tmp = 0;
	size_t i = 0;
	unsigned* v = NULL;

	while (x != 0)
	{
		tmp = x % 10;
		++i;
		v = realloc(v, i * sizeof(unsigned));
		v[i - 1] = tmp;
		x /= 10;
	}

	for (size_t k = 1; k < i; ++k) {
		if (v[k] != v[k - 1] - 1) {
			free(v);
			return false;
		}
	}
	free(v);
	return true;
}