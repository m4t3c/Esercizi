#include <stdio.h>
#include <stdlib.h>

void ripeti(int c, unsigned n, FILE* f) {
	for (unsigned i = 0; i < n; ++i) {
		fprintf(f, "%c", c);
	}
}

void croceromana(FILE* f, unsigned char n) {

	for (unsigned i = 0; i < n; ++i) {
		ripeti(' ', n * 2, f);
		fprintf(f, "|\n");
	}

	ripeti('-', n * 2, f);
	fputc('+', f);
	ripeti('-', n * 2, f);
	fputc('\n', f);

	for (unsigned i = 0; i < n * 2; ++i) {
		ripeti(' ', n * 2, f);
		fprintf(f, "|\n");
	}

}