#include "little_alchemy.h"
#include <string.h>

const char* combine(const char* first, const char* second, const struct element* elems, size_t n) {

	for (size_t i = 0; i < n; ++i) {
		if ((strcmp(first, elems[i].first) == 0 && strcmp(second, elems[i].second) == 0) || (strcmp(second, elems[i].first) == 0 && strcmp(first, elems[i].second) == 0)) {
			return elems[i].product;
		}
	}

	return NULL;
}