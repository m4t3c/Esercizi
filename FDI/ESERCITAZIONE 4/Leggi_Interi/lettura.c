#include "lettura.h"

int* leggiinteri(const char* filename, size_t* size) {
	
	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return NULL;
	}

	size_t n = 0;
	size_t n_read = fread(&n, sizeof(int), 1, f);
	if(n_read != 1) {
		fclose(f);
		return NULL;
	}
	int* res = calloc(n, sizeof(int));

	int tmp = 0;
	int i = 0;

	while (fread(&tmp, sizeof(int), 1, f))
	{
		res[i] = tmp;
		++i;
	}

	fclose(f);
	*size = n;
	return res;
}