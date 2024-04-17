#include <stdio.h>
#include <stdlib.h>

void ripeti(FILE* f, char c, unsigned char n) {
	for (int i = 0; i < n; ++i) {
		fputc(c, f);
	}
}

void capsula(FILE* f, unsigned char n) {

	ripeti(f, ' ', n);
	ripeti(f, '_', n);
	fputc('\n', f);

	unsigned char k = 0;
	for (; k < n; ++k) {
		ripeti(f, ' ', n - 1 - k);
		fputc('/', f);
		ripeti(f, ' ', n + 2 * k);
		fputs("\\\n", f);
	}

	--k;
	for (unsigned char i = 0; i < n; ++i) {
		fputc('|', f);
		ripeti(f, ' ', n + 2 * k);
		fputs("|\n", f);
	}

	for (unsigned char i = 0; i < n - 1; ++i) {
		ripeti(f, ' ', i);
		fputc('\\', f);
		ripeti(f, ' ', n + 2 * k);
		fputs("/\n", f);
		--k;
	}

	ripeti(f, ' ', n - 1);
	fputc('\\', f);
	ripeti(f, '_', n);
	fputs("/\n", f);
}