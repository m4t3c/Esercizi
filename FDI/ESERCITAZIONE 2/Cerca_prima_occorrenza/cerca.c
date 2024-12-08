#include "cerca.h"

extern int cerca_primo(const char* s, char c) {

	int i = 0;
	int r = -1;
	while (s[i] != 0) {
		if (s[i] == c) {
			r = i;
			return r;
		}
		++i;
	}

	return r;
}