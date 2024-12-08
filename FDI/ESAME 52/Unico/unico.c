#include "unico.h"
#include <string.h>

const struct oggetto* unico(const struct carta* c) {
	size_t i = 0;
	size_t chk = 0;
	const struct oggetto* res = NULL;

	for (; i < c->n; ++i) {
		for (size_t j = 0; j < c->n; ++j) {
			if (j == i) {
				continue;
			}
			if (strcmp(c->disegni[i].forma, c->disegni[j].forma) == 0) {
				for (size_t h = 0; h < c->n; ++h) {
					if (h == i) {
						continue;
					}
					if (strcmp(c->disegni[i].colore, c->disegni[h].colore) == 0) {
						++chk;
						break;
					}
				}
			}
			
		}
		if (chk == 0) {
			res = &c->disegni[i];
			break;
		}
		chk = 0;

	}

	return res;
}