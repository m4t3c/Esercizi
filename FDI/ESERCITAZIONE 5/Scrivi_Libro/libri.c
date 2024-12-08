#include "libri.h"

bool libro_scrivi(const struct libro* p, FILE* f) {
	
	if (p == NULL || f == NULL) {
		return false;
	}

	size_t sl = strlen(p->titolo);
	size_t cread = fwrite(p->titolo, sizeof(char), sl + 1, f);
	if (cread != sl + 1) {
		return false;
	}

	size_t i = 0;
	uint16_t* annata = p->anni_ristampe;

	for (; annata[i] != 0; ++i) {
		size_t aread = fwrite(&annata[i], sizeof(uint16_t), 1, f);
		if (aread != 1) {
			return false;
		}
	}
	size_t zread = fwrite(&annata[i], sizeof(uint16_t), 1, f);
	if (zread != 1) {
		return false;
	}

	return true;
}