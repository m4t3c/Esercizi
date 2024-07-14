#define _CRT_SECURE_NO_WARNINGS
#include "vettori.h"

size_t conta_vettori(FILE* f) {
	int c = 0;
	size_t count = 0;
	while ((c = fgetc(f)) != EOF) {
		if (c == '\n') {
			++count;
		}
	}

	rewind(f);
	return count;
}

struct vettore* vettori_leggi(FILE* f, size_t* n) {

	*n = conta_vettori(f);
	struct vettore* res = malloc(*n * sizeof(struct vettore));

	for (size_t i = 0; i < *n; ++i) {
		fscanf(f, "%zu", &res[i].len);
		res[i].data = malloc(res[i].len * sizeof(int));
		for (size_t j = 0; j < res[i].len; ++j) {
			fscanf(f, "%d", &res[i].data[j]);
		}

	}

	return res;
}