#include <stdlib.h>

extern void encrypt(char* s, unsigned int n) {
	if (s == NULL) {
		return;
	}

	for (unsigned i = 0; i < n; ++i) {
		s[i] ^= 0xAA;
	}
}