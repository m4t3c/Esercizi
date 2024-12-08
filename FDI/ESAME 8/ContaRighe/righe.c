#include "righe.h"

unsigned int conta_righe(FILE* f) {

	unsigned res = 1;
	int c;
	while ((c = fgetc(f)) != EOF) {
		if (c == '\n') {
			++res;
		}
	}

	return res;
}