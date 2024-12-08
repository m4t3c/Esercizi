#define _CRT_SECURE_NO_WARNINGS
#include "gioielli.h"
#include <stdio.h>

int Compare(const void* a, const void* b) {
	const Gioiello* pa = a;
	const Gioiello* pb = b;

	if (pa->peso / pa->prezzo < pb->peso / pb->prezzo) {
		return 1;
	}
	else if (pa->peso / pa->prezzo > pb->peso / pb->prezzo) {
		return -1;
	}
	else
	{
		return 0;
	}
}

Gioiello* CompraGioielli(const char* filename, float budget, size_t* ret_size) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	Gioiello* jewels = calloc(1, sizeof(Gioiello));
	size_t i = 0;

	while ((fscanf(f, "%d %f %f", &jewels[i].codice, &jewels[i].peso, &jewels[i].prezzo)) == 3) {

		++i;
		jewels = realloc(jewels, (i + 1) * sizeof(Gioiello));
	}

	qsort(jewels, i, sizeof(Gioiello), Compare);
	Gioiello* res = NULL;
	size_t n_jewels = 0;

	for (size_t j = 0; j < i && budget > 0; ++j) {
		if (budget >= jewels[j].prezzo) {
			res = realloc(res, (j + 1) * sizeof(Gioiello));
			res[n_jewels] = jewels[j];
			budget -= res[n_jewels].prezzo;
			++n_jewels;
		}
	}
	
	free(jewels);
	fclose(f);
	*ret_size = n_jewels;

	return res;
}