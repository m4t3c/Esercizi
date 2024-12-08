#include <limits.h>

static void MinimoRec(const int* v, int v_size, int* min) {

	if (v[v_size] < *min) {
		*min = v[v_size];
	}

	if (v_size == 0) {
		return;
	}

	MinimoRec(v, v_size - 1, min);
}

int Minimo(const int* v, int v_size) {

	int min = INT_MAX;
	MinimoRec(v, v_size - 1, &min);

	return min;
}