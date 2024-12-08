#include <stdint.h>
#include <stdio.h>

void ripeti(int c, uint8_t n, FILE* f) {

	for (uint8_t i = 0; i < n; ++i) {
		fputc(c, f);
	}
}

void scrivi_v(FILE* f, uint8_t n) {

	if (n == 0) {
		return;
	}

	uint8_t tmp1 = 0;
	uint8_t tmp2 = 2 * n;

	for (uint8_t i = 0; i < n; ++i) {
		ripeti(' ', tmp1, f);
		fputc('\\', f);
		ripeti(' ', tmp2 - 2, f);
		fputc('/', f);
		fputc('\n', f);
		++tmp1;
		tmp2 -= 2;
	}
}