#include <stdlib.h>
#include <stdio.h>

void print(char c, unsigned n) {
	for (unsigned i = 0; i < n; ++i) {
		fprintf(stdout, "%c", c);
	}
}

extern void stampa_cross(unsigned int n) {

	//parte superiore
	unsigned size = n;
	for (unsigned i = 0; i < n; ++i) {
		print(' ', i);
		fprintf(stdout, "\\");
		print(' ', 2*size - 1);
		fprintf(stdout, "/\n");
		--size;
	}

	print(' ', n);
	fprintf(stdout, "x\n");

	++size;
	//parte inferiore
	for (unsigned i = 0; i < n; ++i) {
		print(' ', n - (i + 1));
		fprintf(stdout, "/");
		print(' ', 2 * size - 1);
		fprintf(stdout, "\\\n");
		++size;
	}

}