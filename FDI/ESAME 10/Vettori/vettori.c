#include "vettori.h"

int vettore_leggi(FILE* f, struct vettore* v) {

	char c = 0;
	fread(&c, sizeof(char), 1, f);
	if (c == 0) {
		return 0;
	}
	v->size = c;
	v->data = malloc(c * sizeof(double));
	size_t check = 0;
	for (size_t i = 0; i < v->size; ++i) {
		check = fread(&v->data[i], sizeof(double), 1, f);
		if (check != 1) {
			return 0;
		}
	}
	
	return 1;
}