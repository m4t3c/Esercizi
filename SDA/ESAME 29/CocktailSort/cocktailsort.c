#include <stdlib.h>
#include <stdbool.h>

static void b2e(int* v, size_t start, size_t end, bool* check) {

	for (size_t i = start; i < end; ++i) {
		if (v[i] > v[i + 1]) {
			int tmp = v[i];
			v[i] = v[i + 1];
			v[i + 1] = tmp;
			*check = true;
		}
	}
}

static void e2b(int* v, size_t start, size_t end, bool* check) {

	for (size_t i = start; i > end; i--) {
		if (v[i] < v[i - 1]) {
			int tmp = v[i];
			v[i] = v[i - 1];
			v[i - 1] = tmp;
			*check = true;
		}
	}

}

void CocktailSort(int* v, size_t v_size) {

	if (v == NULL || v_size == 0) {
		return;
	}

	size_t start = 0;
	size_t end = v_size - 1;
	bool check1 = false;
	bool check2 = false;

	while (end > start) {

		b2e(v, start, end, &check1);
		--end;
		e2b(v, end, start, &check2);
		++start;

		if (!check1 && !check2) {
			break;
		}

		check1 = false;
		check2 = false;
	}

}