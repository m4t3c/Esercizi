#include "scrittura.h"

int scrivimaiuscolo(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}

	int c = 0;

	while (1) {
		c = fgetc(f);
		if (c == EOF) {
			break;
		}
		if (c >= 'a' && c <= 'z') {
			c -= ('a' - 'A');
		}
		fprintf(stdout, "%c", c);
	}
	
	fclose(f);
	return 1;
}