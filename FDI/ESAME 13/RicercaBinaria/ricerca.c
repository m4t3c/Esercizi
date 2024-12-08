#include <stdlib.h>

int ricerca_binaria(const int* v, size_t n, int x) {

	if (x > v[n - 1] || x < v[0]) {
		return -1;
	}

	int sup = (int)n - 1;
	int min = 0;
	int m = (sup + min)/ 2;
	while (v[m] != x) {
		if (v[m] > x) {
			sup = m - 1;
			m = (sup + min) / 2;
		}
		else
		{
			min = m + 1;
			m = (sup + min) / 2;
		}
	}

	return m;
}