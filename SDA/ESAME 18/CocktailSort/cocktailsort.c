#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

static bool First(size_t start, size_t end, int* v) {

	bool res = false;

	for (size_t i = start; i < end; ++i) {
		if (v[i] > v[i + 1]) {
			int tmp = v[i];
			v[i] = v[i + 1];
			v[i + 1] = tmp;
			res = true;
		}
	}

	return res;
}

static bool Second(size_t start, size_t end, int* v) {
	
	bool res = false;

	for (size_t i = end; i > start; --i) {
		if (v[i] < v[i - 1]) {
			int tmp = v[i];
			v[i] = v[i - 1];
			v[i - 1] = tmp;
			res = true;
		}
	}

	return res;
}

void CocktailSort(int* v, size_t v_size) {

	if (v == NULL) {
		return;
	}

	size_t start = 0;
	size_t end = v_size - 1;
	while (start < end) {
		bool check1 = First(start, end, v);
		--end;
		bool check2 = Second(start, end, v);
		++start;

		if (!check1 && !check2) {
			break;
		}
	}

}