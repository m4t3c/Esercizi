#include "quadrati.h"

void ripeti(unsigned int n, char c) {
	for (unsigned i = 0; i < n; ++i) {
		fprintf(stdout, "%c", c);
	}
	return;
}

void stampa_quadrato(unsigned int lato) {
	
	ripeti(lato, '*');
	putc('\n', stdout);
	for (unsigned i = 0; i < lato - 2; ++i) {
		putc('*', stdout);
		ripeti(lato - 2, ' ');
		printf("*\n");
	}
	ripeti(lato, '*');

	return;
}