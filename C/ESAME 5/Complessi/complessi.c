#define _CRT_SECURE_NO_WARNINGS
#include "complessi.h"

extern int read_complesso(struct complesso* comp, FILE* f) {

	int c = 0;
	unsigned idx = 0;
	while (!feof(f)) {
		if (fscanf(f, "%lf %lf\n", &comp[idx].re, &comp[idx].im) != 2) {
			return 0;
		}
		else
		{
			++idx;
			comp = realloc(comp, (idx + 1) * sizeof(struct complesso));
		}
	}

	return 1;
}

void write_complesso(const struct complesso* comp, FILE* f) {

	fprintf(f, "%f %f\n", comp->re, comp->im);
}

void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2) {


}