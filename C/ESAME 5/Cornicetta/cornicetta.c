#include <stdio.h>
#include <string.h>

void ripeti(size_t n, char* c) {
	for (size_t i = 0; i < n; ++i) {
		fprintf(stdout, "%c", *c);
	}
}

extern void stampa_cornicetta(const char* s) {

	fprintf(stdout, "/");
	size_t len = strlen(s);
	ripeti(len + 2, "-");
	fprintf(stdout, "\\\n");
	fprintf(stdout, "| %s |\n", s);
	fprintf(stdout, "\\");
	ripeti(len + 2, "-");
	fprintf(stdout, "/\n");
}