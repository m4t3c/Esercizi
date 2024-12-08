#include <stdlib.h>
#include <stdint.h>

extern void iota(uint32_t* x, size_t n) {

	if (x == NULL) {
		return;
	}

	uint32_t v = 0;

	for (size_t i = 0; i < n; ++i) {
		x[i] = v;
		++v;
	}
}