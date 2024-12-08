#include <stdlib.h>
#include <stdint.h>

extern void copy_vector(uint32_t* dst, uint32_t* src, size_t n);

int main(void) {
	
	uint32_t dst[4] = { 3, 6, 7, 8 };
	uint32_t src[4] = { 0, 9, 2, 1 };
	copy_vector(dst, src, 4);

	return 0;
}