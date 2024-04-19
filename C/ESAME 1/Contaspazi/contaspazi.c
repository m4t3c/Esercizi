#include <stdlib.h>

extern unsigned int conta_spazi(const char* s) {

	unsigned r = 0;
	for (size_t i = 0; s[i] != 0; ++i) {
		if (s[i] == ' ') {
			++r;
		}
	}

	return r;
}