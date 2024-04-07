#include "persona.h"

struct persona* leggi_persone(const char* filename, size_t* size) {
	
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}

	size_t n = 0;
	int c = fscanf(f, "%zu", &n);
	if (c != 1 || n == 0) {
		fclose(f);
		*size = 0;
		return NULL;
	}

	struct persona* res = calloc(n, sizeof(struct persona));
	for (size_t i = 0; i < n; ++i) {
		c = fscanf(f, "%i , %49[^\n]", &res[i].anni, res[i].nome);
		if (c != 2) {
			*size = 0;
			fclose(f);
			free(res);
			return NULL;
		}
	}

	fclose(f);
	*size = n;
	return res;
}