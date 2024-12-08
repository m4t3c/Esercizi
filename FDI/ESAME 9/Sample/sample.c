#include "sample.h"

int sample_scrivi(FILE* f, const struct sample* s) {
	if (f == NULL || s == NULL) {
		return 0;
	}

	if ((fwrite(&s->idSample, sizeof(int), 1, f)) != 1) {
		return 0;
	}

	if ((fwrite(&s->nomeCategoria, sizeof(char), 20, f)) != 1) {
		return 0;
	}

	if ((fwrite(&s->accuracy, sizeof(double), 1, f)) != 1) {
		return 0;
	}

	return 1;
}

int sample_leggi(FILE* f, struct sample* s) {
	if (f == NULL || s == NULL) {
		return 0;
	}

	if ((fread(&s->idSample, sizeof(int), 1, f)) != 1) {
		return 0;
	}

	if ((fread(&s->nomeCategoria, sizeof(char), 20, f)) != 1) {
		return 0;
	}

	if ((fread(&s->accuracy, sizeof(double), 1, f)) != 1) {
		return 0;
	}

	return 1;
}