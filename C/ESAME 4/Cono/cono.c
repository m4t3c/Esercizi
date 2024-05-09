#include <stdio.h>

void ripeti(unsigned n, char c) {
	for (unsigned i = 0; i < n; ++i) {
		fprintf(stdout, "%c", c);
	}
}

void stampa_cono(unsigned int h) {

	ripeti(h + 1, ' ');
	fprintf(stdout, "_\n");
	unsigned tmp = h;
	unsigned i = 0;
	for (; i < (h - 1); ++i) {
		ripeti(tmp, ' ');
		fprintf(stdout, "/");
		ripeti((2 * i) + 1, ' ');
		fprintf(stdout, "\\\n");
		--tmp;
	}
	fprintf(stdout, "_/");
	ripeti((i * 2) + 1, ' ');
	fprintf(stdout, "\\_\n");

}