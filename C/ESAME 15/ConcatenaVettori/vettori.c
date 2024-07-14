#include "vettori.h"

struct vettore* mergeVettori(const struct vettore* a, const struct vettore* b) {

	struct vettore* res = malloc(sizeof(struct vettore));
	res->n = a->n + b->n;
	res->data = malloc(res->n * sizeof(double));
	size_t i = 0;
	for (size_t j = 0; j < a->n; ++j) {
		res->data[i] = a->data[j];
		++i;
	}

	for (size_t j = 0; j < b->n; ++j) {
		res->data[i] = b->data[j];
		++i;
	}

	return res;
}