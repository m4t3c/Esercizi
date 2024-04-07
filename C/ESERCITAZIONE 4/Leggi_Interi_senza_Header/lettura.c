#include "lettura.h"

int* leggiinteri2(const char* filename, size_t* size) {
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}
	
	size_t i = 0;
	int tmp = 0;
	size_t n_reads = 0;
	int *res = NULL;

	while ((n_reads = fread(&tmp, sizeof(int), 1, f)) == 1)
	{
		res = realloc(res, (i + 1) * sizeof(int));
		res[i] = tmp;
		++i;
	}

	*size = i;
	fclose(f);
	return res;
}