#include <stdlib.h>
#include <stdint.h>

extern void iota(uint32_t* x, size_t n);

int main(void) {
	uint32_t* v = calloc(5, sizeof(uint32_t));
	iota(v, 5);

	return 0;
}