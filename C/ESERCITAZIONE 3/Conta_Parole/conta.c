#include <stdlib.h>

extern size_t conta_parole(const char* s) {

	size_t r = 0;
	size_t i = 0;

	for (; s[i] != 0; ++i) {
		if (s[i] == ' ') {
			++r;
		}
	}
	
	if (s[i - 1] != ' ') {
		++r;
	}

	return r;
}
