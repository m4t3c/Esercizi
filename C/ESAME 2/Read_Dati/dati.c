#include "dati.h"

struct dato* read_dati(const char* filename, unsigned int* pn) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	unsigned n = 0;
	char c = 0;
	while ((c = fgetc(f)) != EOF) {
		if (c == '\n') {
			++n;
		}
	}

	struct dato* res = calloc(n, sizeof(struct dato));
	rewind(f);

	for (unsigned i = 0; i < n; ++i) {
		fscanf(f, "%lf%u", &res[i].valore, &res[i].classe);
	}
	*pn = n;
	fclose(f);

	return res;
}