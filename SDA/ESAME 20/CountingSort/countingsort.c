#include <stdlib.h>
#include <limits.h>

static int FindMax(int* v, size_t v_size) {

	int res = INT_MIN;
	for (size_t i = 0; i < v_size; ++i) {
		if (v[i] > res) {
			res = v[i];
		}
	}

	return res;
}

static int FindMin(int* v, size_t v_size) {
	
	int res = INT_MAX;
	for (size_t i = 0; i < v_size; ++i) {
		if (v[i] < res) {
			res = v[i];
		}
	}

	return res;
}

void CountingSort(int* v, size_t v_size) {

	int max = FindMax(v, v_size);
	int min = FindMin(v, v_size);

	int* tmp = calloc((max - min + 1), sizeof(int));
	for (size_t i = 0; i < v_size; ++i) {
		tmp[v[i] - min] += 1;;
	}

	size_t index = 0;
	for (size_t i = 0; i < (size_t)(max - min + 1); ++i) {
		while (tmp[i] > 0) {
			v[index] = (int)i + min;
			++index;
			--tmp[i];
		}
	}

	free(tmp);
}