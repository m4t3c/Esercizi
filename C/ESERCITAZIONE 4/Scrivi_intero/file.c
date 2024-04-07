#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

extern bool scrivi_intero(const char* filename, int i) {
	
	FILE* f = fopen(filename, "w");
	if (f == NULL) {
		fclose(f);
		return false;
	}

	fprintf(f, "%d", i);

	fclose(f);
	return true;
}