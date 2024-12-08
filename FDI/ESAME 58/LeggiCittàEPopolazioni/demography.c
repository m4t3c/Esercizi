#include "demography.h"
#include <stdlib.h>
#include <stdio.h>

struct city* read_cities(const char* filename, uint32_t* n) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	size_t nread;
	uint32_t ncities = 0;

	nread = fread(&ncities, sizeof(uint32_t), 1, f);
	if (nread != 1 || ncities == 0) {
		return NULL;
	}

	char tmp = 0;
	size_t word_idx = 0;

	struct city* res = malloc(ncities * sizeof(struct city));
	for (size_t i = 0; i < ncities; ++i) {
		res[i].name = calloc(256, sizeof(char));
		while (fread(&tmp, 1, 1, f)) {
			if (tmp == 0) {
				break;
			}
			if (word_idx > 255) {
				break;
			}
			res[i].name[word_idx] = tmp;
			++word_idx;
		}

		if (tmp != 0) {
			for (size_t j = 0; j < i; ++j) {
				free(res[i].name);
			}
			free(res);
			fclose(f);
			return NULL;
		}

		fread(&(res[i].population), sizeof(uint32_t), 1, f);
		word_idx = 0;
	}

	*n = ncities;
	fclose(f);
	return res;
}