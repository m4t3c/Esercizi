#define _CRT_SECURE_NO_WARNINGS
#include "libri.h"
#include <stdio.h>

struct libro* read_libri(const char* filename, unsigned int* pn) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	struct libro* res = malloc(sizeof(struct libro));

	unsigned i = 0;
	while (fscanf(f, "%u;%[^;];%u\n", &res[i].codice, res[i].titolo, &res[i].pagine) == 3) {
		++i;
		res = realloc(res, (i + 1) * sizeof(struct libro));
	}

	*pn = i + 1;
	fclose(f);
	return res;
} 