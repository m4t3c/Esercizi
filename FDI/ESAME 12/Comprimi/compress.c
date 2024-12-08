#include "compress.h"
#include <stdio.h>

int dati_read(const char* filename, struct dati* d) {
	
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}

	unsigned char c = 0;
	size_t count = 0;
	while ((fread(&c, sizeof(char), 1, f)) == 1) {
		++count;
	}

	return 1;
}