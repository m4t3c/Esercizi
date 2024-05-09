#include <stdlib.h>

extern size_t conta_parole(const char* s) {

	size_t res = 0;

	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == ' ' || s[i + 1] == 0) {
			++res;
		}
	}

	return res;
}