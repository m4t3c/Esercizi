#define _CRT_SECURE_NO_WARNINGS
#include "persona.h"
#include <stdio.h>
/*
struct persona* leggi_persone(const char* filename, size_t* size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		fclose(f);
		*size = 0;
		return NULL;
	}

	int size_tmp = 0;
	if (fscanf(f, "%d\n", &size_tmp) != 1 || size_tmp <= 0) {
		fclose(f);
		*size = 0;
		return NULL;
	}

	*size = size_tmp;
	struct persona* res = malloc(size_tmp * sizeof(struct persona));

	for (int i = 0; i < size_tmp; ++i) {
		int r = fscanf(f, "%d , %[^\n]", &res[i].anni, res[i].nome);
		if (r != 2) {
			fclose(f);
			free(res);
			*size = 0;
			return NULL;
		}
	}

	fclose(f);
	return res;
}*/

struct persona* leggi_persone(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}
	size_t persone = 0;

	int nread = fscanf(f, "%zu", &persone);
	if (nread != 1) {
		*size = 0;
		fclose(f);
		return NULL;
	}
	size_t prs_idx = 0;
	struct persona* res = calloc(persone, sizeof(struct persona));

	while (prs_idx < persone) {
		if (fscanf(f, "%d , %[^\n]", &(res[prs_idx].anni), res[prs_idx].nome) != 2) {
			*size = 0;
			free(res);
			fclose(f);
			return NULL;
		}
		++prs_idx;
	}
	*size = persone;
	fclose(f);
	return res;
}