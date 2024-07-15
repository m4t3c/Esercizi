#include <stdlib.h>
#include <stdbool.h>

bool IsUsed(int val, const int* v, size_t n) {
	for (size_t i = 0; i < n; ++i) {
		if (val == v[i]) {
			return true;
		}
	}

	return false;
}

int* missing(const int* v, size_t n, int min, int max, size_t* size) {

	if (v == NULL) {
		*size = 0;
		return NULL;
	}

	int* res = NULL;
	size_t s = 0;
	for (int i = min; i <= max; ++i) {
		if (!IsUsed(i, v, n)) {
			++s;
			res = realloc(res, s * sizeof(int));
			res[s - 1] = i;
		}
	}

	*size = s;
	return res;
}