#include "read_file.h"
#include <stdio.h>

byte* read_file(const char* szFileName, size_t* cb) {

	FILE* f = fopen(szFileName, "rb");
	if (f == NULL) {
		*cb = 0;
		return NULL;
	}

	fseek(f, 0, SEEK_END);
	size_t size = ftell(f);
	rewind(f);

	byte* res = malloc(size * sizeof(byte));
	*cb = fread(res, sizeof(byte), size, f);

	fclose(f);
	return res;
}