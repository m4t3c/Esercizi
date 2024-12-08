#include "stringhe.h"
#include <stdio.h>
#include <string.h>

void stringhe_scrivi(const char* filename, const char** vs, size_t n) {

	FILE* f = fopen(filename, "wb");
	for (size_t i = 0; i < n; ++i) {
		size_t si_len = strlen(vs[i]);
		fwrite(vs[i], sizeof(char), si_len, f);
		fputc('\0', f);
	}
	fclose(f);
}